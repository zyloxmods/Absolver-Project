#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GatherTrap.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AGatherTrap : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActiveChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveChanged ActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iTrapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iZoneIndex;
    
public:
    AGatherTrap(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void BPF_Use();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetActive(bool _bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSetUsed(bool _bUsed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnActiveChanged();
    
};

