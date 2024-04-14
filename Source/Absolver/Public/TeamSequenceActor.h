#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceActor.h"
#include "TeamSequenceActor.generated.h"

class AActor;
class AFightingCharacter;
class AFightingPlayerController;
class USceneComponent;

UCLASS(Blueprintable)
class ABSOLVER_API ATeamSequenceActor : public ASCLevelSequenceActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLaunched);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnd OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaunched OnLaunched;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFightingCharacter*> m_Dummies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStayOnBlackScreen;
    
public:
    ATeamSequenceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceEnded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Stop();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnPlayersAtLocations(uint8 _uiTeam, const TArray<USceneComponent*>& _locations, UClass* _actorClass);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnGenericActorsAtLocationsPerAvailablePlayers(uint8 _uiTeam, const TArray<USceneComponent*>& _locations, UClass* _actorClass, TArray<AActor*>& _outCreatedActor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetController(AFightingPlayerController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLoading();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Stop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayersLoaded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Launch(AFightingPlayerController* Controller, uint8 _uiTeam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_HandleSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_GetIsFinished() const;
    
};

