#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.h"
#include "ObjectiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UObjectiveComponent : public UActorComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnObjectiveCleared);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectiveDesactivated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectiveCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectiveActivated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveCompleted OnObjectiveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveActivated OnObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveDesactivated OnObjectiveDesactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveCleared OnObjectiveCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bObjectiveActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bObjectiveCompleted;
    
public:
    UObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCompleted();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DesactivateObjective();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CompleteObjective();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ActivateObjective();
    

    // Fix for true pure virtual functions not being implemented
};

