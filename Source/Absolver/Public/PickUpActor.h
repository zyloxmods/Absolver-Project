#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractiveInterface.h"
#include "PickUpActor.generated.h"

class AController;
class APawn;
class APickUpActor;
class APlayerController;
class UDataAsset;
class UInteractionObjectComponent;
class ULootComponent;

UCLASS(Blueprintable)
class ABSOLVER_API APickUpActor : public AActor/*, public IInteractiveInterface */ {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPickedUp, APickUpActor*, _pickedActor, AController*, _picker);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickedUp OnPickedUpDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* m_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULootComponent* m_LootComponent;
    
public:
    APickUpActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPickedUp(APlayerController* _playerController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPickUp(APawn* _pawn);
    

    // Fix for true pure virtual functions not being implemented
};

