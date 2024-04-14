#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EResourceAreaStatus.h"
#include "ResourceArea.generated.h"

class AFightingCharacter;
class AResourceArea;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AResourceArea : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceAreaStatusChanged, AResourceArea*, ResourceArea, EResourceAreaStatus, NewStatus);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceAreaScoreChanged, uint8, teamID, float, Score);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceAreaStatusChanged OnResourceAreaStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceAreaScoreChanged OnResourceAreaScoreChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepActivate, meta=(AllowPrivateAccess=true))
    bool m_bActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepAreaStatus, meta=(AllowPrivateAccess=true))
    EResourceAreaStatus m_eAreaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepScoreCapture, meta=(AllowPrivateAccess=true))
    TArray<float> m_ScoreCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fScoreLimitBeforeCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepNumTeam, meta=(AllowPrivateAccess=true))
    int32 m_iNbTeams;
    
public:
    AResourceArea(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRepScoreCapture();
    
    UFUNCTION(BlueprintCallable)
    void OnRepNumTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRepAreaStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRepActivate();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCharacterInside(AFightingCharacter* _character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EResourceAreaStatus BPF_GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetScoreToCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetScore(uint8 _uiTeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetRewardScoreForCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetAreaName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnActivation(bool _bActivate);
    
};

