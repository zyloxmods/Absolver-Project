#pragma once
#include "CoreMinimal.h"
#include "AdversarialPlayerState.h"
#include "GatherPlayerState.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AGatherPlayerState : public AAdversarialPlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourcesAmountChanged, int32, _iNewAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBonusPointProgressionChanged, float, _fNewAmount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourcesAmountChanged OnResourcesAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourcesAmountChanged OnBonusPointsAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusPointProgressionChanged OnBonusPointProgressionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccumulatedResource, meta=(AllowPrivateAccess=true))
    int32 m_iAccumulatedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Resource, meta=(AllowPrivateAccess=true))
    int32 m_iResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BonusPoints, meta=(AllowPrivateAccess=true))
    int32 m_iBonusPoints;
    
public:
    AGatherPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Resource();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BonusPoints();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccumulatedResource();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetResource(int32 _iValue, bool _bUpdateResourcesForMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResourcesForMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetBonusPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddResource(int32 _iValue);
    
};

