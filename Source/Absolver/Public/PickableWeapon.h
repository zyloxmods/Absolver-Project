#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "InteractiveObject.h"
#include "PickableWeaponSource.h"
#include "PickableWeapon.generated.h"

class AActor;
class AVisibleWeaponActor;

UCLASS(Blueprintable)
class ABSOLVER_API APickableWeapon : public AInteractiveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickableWeaponSource, meta=(AllowPrivateAccess=true))
    FPickableWeaponSource m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVisibleWeaponActor*> m_WeaponActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vVisualEffectsPosition;
    
public:
    APickableWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestPickWeaponPermission(AActor* _requester);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponActorEndPlayCallback(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickableWeaponSource();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAnswerPickWeaponRequest(AActor* _grantedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateTriggerBox();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnActivation();
    
};

