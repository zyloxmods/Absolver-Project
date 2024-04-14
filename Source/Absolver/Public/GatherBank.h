#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractiveInterface.h"
#include "GatherBank.generated.h"

class AGatherPlayerState;
class APlayerController;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherBank : public AActor/*, public IInteractiveInterface */{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iMaxResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_MaxResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentResource, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AGatherPlayerState* m_currentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* m_currentController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iBankIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iZoneIndex;
    
public:
    AGatherBank(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentResource();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Unlock();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_TryLock(AGatherPlayerState* _player, APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void BPF_StoreResource(int32 _iAmount);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Lock(AGatherPlayerState* _player, APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetRemainingStorageCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetMaxResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGatherPlayerState* BPF_GetCurrentPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* BPF_GetCurrentController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnLock(AGatherPlayerState* _player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBankFull();
    

    // Fix for true pure virtual functions not being implemented
};

