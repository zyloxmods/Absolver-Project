#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractiveInterface.h"
#include "LayoutDoorTransition.generated.h"

class APlayerController;
class UPVECutsceneInteractionComponent;

UCLASS(Blueprintable)
class ABSOLVER_API ALayoutDoorTransition : public AActor/*, public IInteractiveInterface */ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPVECutsceneInteractionComponent* m_InteractionComponent;
    
    ALayoutDoorTransition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    

    // Fix for true pure virtual functions not being implemented
};

