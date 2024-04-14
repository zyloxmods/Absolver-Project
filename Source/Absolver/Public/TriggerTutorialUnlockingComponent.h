#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerTutorialUnlockingComponent.generated.h"

class AController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UTriggerTutorialUnlockingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TutorialToUnlockRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldDisplayTuto;
    
public:
    UTriggerTutorialUnlockingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_TriggerExitTutorialUnlocking(AController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerEnterTutorialUnlocking(AController* _controller);
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetTutorialRowName();
    
};

