#pragma once
#include "CoreMinimal.h"
#include "PVEGameMode.h"
#include "Templates/SubclassOf.h"
#include "GatherGameMode.generated.h"

class ABaseCharacter;
class AController;
class AGatherBank;
class AGatherPlayerState;
class ATeamSequenceActor;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API AGatherGameMode : public APVEGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fStartGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStoredAmountPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHealthPerResourceStored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StoringTick;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_AIClass[2];
    
public:
    AGatherGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_UnlockAllBanks();
    
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerSynchedCutscene(ATeamSequenceActor* _cutscene);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StoreResource(AGatherPlayerState* _playerState, AController* _playerController, AGatherBank* _bank, int32 _iAmount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StopStoringForAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsPlayerInSession(AGatherPlayerState* _player);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CheckLockValidity(AGatherBank* _bank);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CheckAllLockValidity();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AskAllIfGatesAreClosed();
    
};

