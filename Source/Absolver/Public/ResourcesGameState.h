#pragma once
#include "CoreMinimal.h"
#include "TeamGameState.h"
#include "ResourcesGameState.generated.h"

class AResourceArea;

UCLASS(Blueprintable)
class ABSOLVER_API AResourcesGameState : public ATeamGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewActiveAreaActivation, AResourceArea*, concernedResourceArea, bool, bActive);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewActiveAreaActivation OnNewActiveAreaActivation;
    
protected:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int64> m_TimerNewAreaActivation;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRepActiveNewArea, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AResourceArea>> m_ActiveResourceArea;
    
public:
    AResourcesGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRepActiveNewArea();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastResetResourceAreaDirty(bool _bExpectActive);
    
};

