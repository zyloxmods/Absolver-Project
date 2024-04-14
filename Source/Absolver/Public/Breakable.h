#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetableActor.h"
#include "Breakable.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ABreakable : public AActor/*, public ITargetableActor */{
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatueHealthChanged, float, _fStatueHealth);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatueHealthChanged OnHealthChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Activated, meta=(AllowPrivateAccess=true))
    bool m_bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxGleams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAliveBonusGleams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStatue;
    
public:
    ABreakable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Activated();
    
public:
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SendHealthToHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMaxGleams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetAliveBonusGleams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Hide();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};

