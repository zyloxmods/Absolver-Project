#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AltarBase.h"
#include "Altar.generated.h"

class AActor;
class AFightingCharacter;
class APlayerController;
class APlayerStart;
class UAutoSaveComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AAltar : public AAltarBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUseAltar, APlayerController*, PlayerController, bool, _justUnlocked);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bIsLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUseAltar m_OnUseAltar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSocialInteractionsEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAutoSaveComponent* m_AutoSaveZone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiMatchMakingZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiMatchmakingSubZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRepairsInventoryOnInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRepairsInventoryOnRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AltarUnlockText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AltarActivateText;
    
public:
    AAltar(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSaveStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowHideOnHUD(bool _bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NotCheckPointAnymore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_IsNewCheckPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<APlayerStart*> BPE_GetAssociatedPlayerStarts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AltarUsed(AFightingCharacter* _interactingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AltarUnlocked();
    
};

