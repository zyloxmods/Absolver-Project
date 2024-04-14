#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AttackDataRow.h"
#include "BaseFightingCharacter.h"
#include "EAvoidType.h"
#include "ECardinalPoints.h"
#include "ECharacterSex.h"
#include "EDrawWeaponTestResult.h"
#include "EEquipmentSlot.h"
#include "EFallLevel.h"
#include "EHeight.h"
#include "EImpactType.h"
#include "EItemPowers.h"
#include "EMeditationExitReason.h"
#include "EMoveStatus.h"
#include "EOrderType.h"
#include "EQuadrantTypes.h"
#include "EWeaponAction.h"
#include "EWeaponFamilies.h"
#include "EWeaponSlot.h"
#include "GearUpdateStruct.h"
#include "HandledWeaponInfo.h"
#include "LootBaseItemStruct.h"
#include "FightingCharacter.generated.h"

class AActor;
class AFightingCharacter;
class APickUpActor;
class APickableWeapon;
class AReviveInteractiveObject;
class AVisibleWeaponActor;
class AWeaponActor;
class UAIFightingComponent;
class UAbsorbPropertyDB;
class UAvailabilityLayerDB;
class UAvoidPropertyDB;
class UBaseItemData;
class UBaseWeaponData;
class UCameraComponentThird;
class UCapsuleComponent;
class UDeathDB;
class UDefenseComponent;
class UEffectData;
class UEquipmentSelectionData;
class UHealthComponent;
class UHitComponent;
class UMaterialInterface;
class UMessengerComponent;
class UPlayerAnim;
class UPlayerFightingComponent;
class UPrimitiveComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStatsComponent;
class UVisibleWeaponData;

UCLASS(Blueprintable)
class ABSOLVER_API AFightingCharacter : public ABaseFightingCharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPickUpFailed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResilienceChanged, int32, _iNewResilience);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecoveryFromDamageDealt, float, _fHealAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeditationGhostChanged, bool, _bActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLanding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFalling);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectAddedOrRemoved, bool, _bAdded, UEffectData*, _effectData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChararacterDied, AActor*, _DeadCharacter, AActor*, _instigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FKilldDelegate, AActor*, victim, bool, _bIsOnlyAssist, bool, _bKillingBlow, AActor*, _instigator);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerDB* m_availabilityLayerDB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickUpFailed OnPickUpFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bEnableLookAt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKilldDelegate OnKilledSomething;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectAddedOrRemoved OnEffectAddedOrRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecoveryFromDamageDealt OnRecoveryFromDamageDealt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResilienceChanged OnResilienceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChararacterDied OnCharacterDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeditationGhostChanged OnMeditationGhostChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLanding OnLanding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFalling OnFalling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHasJustBeenHitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowAutonomousAnimPoseTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsInLootBoxOpeningSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDefenseComponent* m_DefenseComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnim* m_AnimationGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponentThird* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_DefaultHandWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_DefaultLegWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitComponent* m_HitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerFightingComponent* m_PlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIFightingComponent* m_AIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_ParryCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_AvoidCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_HitCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* m_HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMessengerComponent* m_MessengerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsComponent* m_StatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeathDB* m_DeathDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TransitionZoneId, meta=(AllowPrivateAccess=true))
    uint8 m_uiTransitionZoneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsMeditationGhost, meta=(AllowPrivateAccess=true))
    bool m_bIsMeditationGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MeditationTransform, meta=(AllowPrivateAccess=true))
    FTransform m_MeditationTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PickUpAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bSpawnOccured;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisibleWeaponActor* m_DisarmedDrawnWeapons[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVisibleWeaponActor*> m_LastDisarmedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponDurability, meta=(AllowPrivateAccess=true))
    float m_fHandledWeaponDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fWeaponRespawnWaitTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_TargetRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetRelativeLerpFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AReviveInteractiveObject> m_AssociatedReviveInteractiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAnAbsolver, meta=(AllowPrivateAccess=true))
    bool m_bIsAnAbsolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 m_uiPawnCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NbOfPlayersForGamemode, meta=(AllowPrivateAccess=true))
    uint8 m_uiNbOfPlayersForGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DepthMaskForGamemode, meta=(AllowPrivateAccess=true))
    uint8 m_uiDepthMaskForGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AvailabilityDepthMaskForGamemode, meta=(AllowPrivateAccess=true))
    uint8 m_uiAvailabilityDepthMaskForGameMode;
    
public:
    AFightingCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMeditationExitReason(EMeditationExitReason _eReason);
    
    UFUNCTION(BlueprintCallable)
    void SetActorHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateMovementAnimation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateGear(const FGearUpdateStruct& _updatedGear);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide(bool _bForceUnrevivable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSex(ECharacterSex _eSex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetNbOfPlayersForGamemode(uint8 _uiNbOfPlayerForGamemode);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMeditationGhost(bool _bIsGhost, FTransform _location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInCinematic(bool _bInCinematic, FTransform _transform);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHandledWeaponDurability(float _fDurability);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFlyMode(bool _bFlyModeActivated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetFaction(uint8 _uiFaction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetEquipmentSelectionFromPath(FName _path);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetEquipmentSelection(UEquipmentSelectionData* _data);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDepthMaskForGamemode(uint8 _uiDepthMaskForGameMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAvailabilityDepthMaskForGamemode(uint8 _uiAvailabilityDepthMaskForGameMode);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestPickWeaponPermission(APickableWeapon* _pickableWeapon);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRepOnAvoidCapsuleHit(int64 _iTimeOfLaunch, AActor* _capsuleOwner, FVector _vImpactPosition, FVector _vImpactDir);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepNotifyGoodDodge();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepKilledBy(AActor* _instigator, FName _killingAttack);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepAddStaminaBoostOnHit(float _fStaminaBoost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPullOutWeapon(const FHandledWeaponInfo& HandledWeaponInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnPickUp(APickUpActor* _pickedUpActor);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGrantProspectToAbsolver();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PerfectLink();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponActorEndPlayCallback(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponDurability();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TransitionZoneId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NbOfPlayersForGamemode();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MeditationTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMeditationGhost();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAnAbsolver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DepthMaskForGamemode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailabilityDepthMaskForGamemode();
    
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedInternalCallback(bool _bAdded, UEffectData* _effectDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleEndOverlap(UPrimitiveComponent* _overlappedComp, AActor* _otherActor, UPrimitiveComponent* _otherComponent, int32 _iOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComp, AActor* _otherActor, UPrimitiveComponent* _otherComponent, int32 _iOtherBodyIndex, bool _bFrommSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastNotifyAISpawned(bool _bIsRespawn);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastWeaponBreak(int64 _iTimeOfBreak);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastUpdateCharacterMesh(USkeletalMesh* _mesh);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetFaction(uint8 _uiFaction);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemoveEffect(UEffectData* _effectData, int64 _iRemovalTimeTick);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastOnAvoidCapsuleHit(int64 _iTimeOfLaunch, AActor* _hitInstigator, FVector _vImpactPosition, FVector _vImpactDir);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLoadWeaponMesh(const FHandledWeaponInfo& HandledWeaponInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastKilledBy(AActor* _instigator, FName _killingAttack);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDisarm(int64 _iTimeOfBreak, const FVector& _vFallDestination);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAddEffect(UEffectData* _effectData, int64 _iStartTimeTick);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hitted(AActor* DamageInstigator, const FAttackDataRow& attackData, FVector ImpactPositionOnHitCapsule, FVector ImpactDir, bool IsGuarding, float StunTime, float Damage, bool _AbsorbBroken, bool _bIsPerfectLink, EHeight ImpactHeight, ECardinalPoints ImpactCardinalPoint, bool _bGuardBroken, bool bLethal, uint8 _uiHitNb, float _fSpecialDamageRatio, EImpactType _eImpactType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerFightingComponent* GetPlayerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventorySize();
    
    UFUNCTION(BlueprintCallable)
    UDefenseComponent* GetDefenseComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIFightingComponent* GetAiComponent() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void GatherResourceChangedCallback(int32 _iNewAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ComboStarted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPickUpAnwer(bool _bSucceeded);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyPerfectLinkDismissed(uint8 _uiOrderAttackID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddStaminaBoostOnHit(float _fStaminaBoost);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Unspawn();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockDepthForGamemode(uint8 _uiDepth);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportForce(const FVector& _destLocation, const FRotator& _destRotation, bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_SpawnFootStepDecal(UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetShardsInfinite(bool _bIsInfinite);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNoTransitionBetweenEmotes(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNbOfPlayersForGamemode(uint8 _uiNbOfPlayers);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvincibility(bool _bIsInvincible);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGuardGaugeInfinite(bool _bIsInfinite);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetBonusMaxHealth(float _fHealth);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveDepthMaskForGamemode(uint8 _uiDepth);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_NeedClientReplicaFastDeath() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_MulticastRemoveEffect(UEffectData* _effectData, float _fPredictionTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_MulticastAddEffect(UEffectData* _effectData, float _fPredictionTime);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchImpact(float _fDamage, bool _bLethal, float _fStunTime);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsShardsInfinite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMeditationGhost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLocalTrainingMeditationGhost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInOpeningLootBoxSequence() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsGuardGaugeInfinite();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsGetUpDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEquippedWeaponSheathed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEquippedWeaponHandled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAnAbsolver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_HudGetCompassQuadrantAngle(int32 _iSampleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_HudGetCompassNbSamples();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_HudGetCompassMinAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasVisibleWeaponInHands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasValidTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasPickedUpWeaponInHands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HandledVisibleWeaponIsAttacking(const FAttackDataRow& _AttackData) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GrantProspectToAbsolver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeaponActor* BPF_GetWeaponActor(EWeaponSlot _eWeaponSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* BPF_GetSkeletalMeshEquipment(EEquipmentSlot _eEquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetPickedUpWeaponDurabilityGauge() const;
    
    UFUNCTION(BlueprintCallable)
    UBaseItemData* BPF_GetInventoryItem(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 BPF_GetHealthFromVictimLevel(AActor* _victim, bool _bAssistOnly, bool _bKillingBlow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* BPF_GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWeaponActor*> BPF_GetHandledWeaponActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVisibleWeaponData* BPF_GetHandledVisibleWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeaponActor* BPF_GetFirstHandledWeaponActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeaponActor* BPF_GetFirstEquippedWeaponActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetEquippedWeaponDurabilityGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWeaponActor*> BPF_GetEquippedWeaponActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseWeaponData* BPF_GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamageReceivedMultiplierFromResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamageReceivedMultiplierFromBonusPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamageMultiplierFromResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamageMultiplierFromBonusPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponAction BPF_GetCurrentWeaponAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentTotalResilience() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetCombatStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponentThird* BPF_GetCameraThird() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEffectData*> BPF_GetAllActiveEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetActiveWeaponFamily() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_EquippedWeaponDisarmed() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_DebugServerRemoveAbsolverStatus();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CharacterFullySpawned();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeSex(ECharacterSex _eSex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDrawWeaponTestResult BPF_CanDrawWeapon(UBaseWeaponData* _weaponData) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelEmoteOrder();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddToInventory(TArray<FLootBaseItemStruct> _loots);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddDepthMaskForGamemode(uint8 _uiDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartPowerFX(EItemPowers _eFxType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Spawn(bool m_bRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReviveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReviveInProgressPercent(float _fPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReviveCancelPercent(float _fPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PickUpWeaponStart(UVisibleWeaponData* _handledWeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PerfectReleaseWindowOpened(float _fWindowLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PerfectLinkWoOMissed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnShardFrozen(bool _bDuringItemUseBuildUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRecoveryFromDamageDealt(float _fHealthRecovered);
    
  //  UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
//    void BPE_OnLanding(bool _bProceduralLanding, EFallLevel _eFallLevel, TEnumAsByte<EPhysicalSurface> _eSurface, const FVector& _vImpactpoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEffectStart(UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEffectEnd(UEffectData* _effectData, bool _bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvoidSuccessful_PredictionServer(AActor* _avoidedActor, EAvoidType _eAvoidType, EOrderType _eOrderType, FName _AttackName, UAvoidPropertyDB* _AvoidPropertyDB, float _fPredictionTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvoidSuccessful(AActor* _avoidedActor, EAvoidType _eAvoidType, EOrderType _eOrderType, FName _AttackName, UAvoidPropertyDB* _AvoidPropertyDB);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvoidCapsuleHit(AActor* _hitInstigator, FVector _vImpactPosition, FVector _vImpactDir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MoveStatusChanged(EMoveStatus _MoveStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MeditationTransition();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_JustBeenHitted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Hit(AActor* victim, const FAttackDataRow& attackData, bool IsGuarding, float Damage, bool _bIsPerfectLink, bool _bIsAbsorbed, bool _bIsGuardBreak);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GatherResourceChanged(int32 _iNewAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndRevive(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndPowerFX(EItemPowers _eFxType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndBeingRevived(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DropWeaponStart(UVisibleWeaponData* _handledWeaponData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoParry(EQuadrantTypes _eParryQuadrantRegardingTarget, EQuadrantTypes _eParryQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoDodge(FVector _vDodgeDirection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DodgeSuccess(AFightingCharacter* _attacker, FName _AttackName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoChangeQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoAvoid(EAvoidType _eAvoidType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DoAbsorb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BeingRevivedStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Avoided(EAvoidType _eAvoid, UAvoidPropertyDB* _AvoidPropertyDB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AttackEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Absorb_PredictionServer(FVector _vImpactPosition, FVector _vImpactDir, float _fDamage, UAbsorbPropertyDB* _AbsorbPropertyDB, AFightingCharacter* _attacker, FName _AttackName, float _fPredictionTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Absorb(FVector _vImpactPosition, FVector _vImpactDir, float _fDamage, UAbsorbPropertyDB* _AbsorbPropertyDB, AFightingCharacter* _attacker, FName _AttackName, const FAttackDataRow& _AttackData, uint8 _uiAttackHitNumber, float _fSpecialAttackDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEventParrySuccessful(AFightingCharacter* _attacker, const FName& _AttackName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEventParried(FVector _vImpactPosition, AFightingCharacter* _ParryInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEventCancel();
    
};

