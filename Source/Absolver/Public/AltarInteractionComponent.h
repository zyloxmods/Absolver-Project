#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAltarInteractionStatus.h"
#include "AltarInteractionComponent.generated.h"

class AAltar;
class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UAltarInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAltarInteractionChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarInteractionChanged m_OnAltarInteractionStatusChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_AltarInteractionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_AltarIdleLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_AltarInteractionExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_AltarUnlockAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractionStatus, meta=(AllowPrivateAccess=true))
    EAltarInteractionStatus m_eInteractionStatus;
    
public:
    UAltarInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInteractionStatus(EAltarInteractionStatus _eNewStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionStatus(EAltarInteractionStatus _eNewStatus);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UsedAltar(AAltar* _altar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAltarInteractionStatus BPF_GetInteractionStatus() const;
    
};

