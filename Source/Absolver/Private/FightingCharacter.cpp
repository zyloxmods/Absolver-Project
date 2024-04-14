#include "FightingCharacter.h"
#include "Components/CapsuleComponent.h"
#include "DefenseComponent.h"
#include "HealthComponent.h"
#include "MessengerComponent.h"
#include "Net/UnrealNetwork.h"

AFightingCharacter::AFightingCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_availabilityLayerDB = NULL;
    this->m_bEnableLookAt = true;
    this->m_bHasJustBeenHitted = false;
    this->m_bAllowAutonomousAnimPoseTick = false;
    this->m_bIsInLootBoxOpeningSequence = false;
    this->m_DefenseComponent = CreateDefaultSubobject<UDefenseComponent>(TEXT("DefenseComponent"));
    this->m_AnimationGraph = NULL;
    this->m_Camera = NULL;
    this->m_DefaultHandWeapons = NULL;
    this->m_DefaultLegWeapons = NULL;
    this->m_HitComponent = NULL;
    this->m_PlayerComponent = NULL;
    this->m_AIComponent = NULL;
    this->m_ParryCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Parry Capsule"));
    this->m_AvoidCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Avoid Capsule"));
    this->m_HitCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Hit Capsule"));
    this->m_HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->m_MessengerComponent = CreateDefaultSubobject<UMessengerComponent>(TEXT("MessengerComponent"));
    this->m_StatsComponent = NULL;
    this->m_DeathDB = NULL;
    this->m_uiTransitionZoneId = 255;
    this->m_bIsMeditationGhost = false;
    this->m_PickUpAngle = 30.00f;
    this->m_bSpawnOccured = false;
    this->m_DisarmedDrawnWeapons[0] = NULL;
    this->m_DisarmedDrawnWeapons[1] = NULL;
    this->m_DisarmedDrawnWeapons[2] = NULL;
    this->m_DisarmedDrawnWeapons[3] = NULL;
    this->m_DisarmedDrawnWeapons[4] = NULL;
    this->m_DisarmedDrawnWeapons[5] = NULL;
    this->m_fHandledWeaponDurability = 1.00f;
    this->m_fWeaponRespawnWaitTotalTime = 10.00f;
    this->m_fTargetRelativeLerpFactor = 8.00f;
    this->m_bIsAnAbsolver = false;
    this->m_uiPawnCounter = 255;
    this->m_uiNbOfPlayersForGameMode = 1;
    this->m_uiDepthMaskForGameMode = 0;
    this->m_uiAvailabilityDepthMaskForGameMode = 0;
}

void AFightingCharacter::SetMeditationExitReason(EMeditationExitReason _eReason) {
}

void AFightingCharacter::SetActorHiddenInGame(bool bNewHidden) {
}

void AFightingCharacter::ServerUpdateMovementAnimation_Implementation() {
}
bool AFightingCharacter::ServerUpdateMovementAnimation_Validate() {
    return true;
}

void AFightingCharacter::ServerUpdateGear_Implementation(const FGearUpdateStruct& _updatedGear) {
}
bool AFightingCharacter::ServerUpdateGear_Validate(const FGearUpdateStruct& _updatedGear) {
    return true;
}

void AFightingCharacter::ServerSuicide_Implementation(bool _bForceUnrevivable) {
}
bool AFightingCharacter::ServerSuicide_Validate(bool _bForceUnrevivable) {
    return true;
}

void AFightingCharacter::ServerSetSex_Implementation(ECharacterSex _eSex) {
}
bool AFightingCharacter::ServerSetSex_Validate(ECharacterSex _eSex) {
    return true;
}

void AFightingCharacter::ServerSetNbOfPlayersForGamemode_Implementation(uint8 _uiNbOfPlayerForGamemode) {
}
bool AFightingCharacter::ServerSetNbOfPlayersForGamemode_Validate(uint8 _uiNbOfPlayerForGamemode) {
    return true;
}

void AFightingCharacter::ServerSetMeditationGhost_Implementation(bool _bIsGhost, FTransform _location) {
}
bool AFightingCharacter::ServerSetMeditationGhost_Validate(bool _bIsGhost, FTransform _location) {
    return true;
}

void AFightingCharacter::ServerSetInCinematic_Implementation(bool _bInCinematic, FTransform _transform) {
}
bool AFightingCharacter::ServerSetInCinematic_Validate(bool _bInCinematic, FTransform _transform) {
    return true;
}

void AFightingCharacter::ServerSetHandledWeaponDurability_Implementation(float _fDurability) {
}
bool AFightingCharacter::ServerSetHandledWeaponDurability_Validate(float _fDurability) {
    return true;
}

void AFightingCharacter::ServerSetFlyMode_Implementation(bool _bFlyModeActivated) {
}
bool AFightingCharacter::ServerSetFlyMode_Validate(bool _bFlyModeActivated) {
    return true;
}

void AFightingCharacter::ServerSetFaction_Implementation(uint8 _uiFaction) {
}
bool AFightingCharacter::ServerSetFaction_Validate(uint8 _uiFaction) {
    return true;
}

void AFightingCharacter::ServerSetEquipmentSelectionFromPath_Implementation(FName _path) {
}
bool AFightingCharacter::ServerSetEquipmentSelectionFromPath_Validate(FName _path) {
    return true;
}

void AFightingCharacter::ServerSetEquipmentSelection_Implementation(UEquipmentSelectionData* _data) {
}
bool AFightingCharacter::ServerSetEquipmentSelection_Validate(UEquipmentSelectionData* _data) {
    return true;
}

void AFightingCharacter::ServerSetDepthMaskForGamemode_Implementation(uint8 _uiDepthMaskForGameMode) {
}
bool AFightingCharacter::ServerSetDepthMaskForGamemode_Validate(uint8 _uiDepthMaskForGameMode) {
    return true;
}

void AFightingCharacter::ServerSetAvailabilityDepthMaskForGamemode_Implementation(uint8 _uiAvailabilityDepthMaskForGameMode) {
}
bool AFightingCharacter::ServerSetAvailabilityDepthMaskForGamemode_Validate(uint8 _uiAvailabilityDepthMaskForGameMode) {
    return true;
}

void AFightingCharacter::ServerRequestPickWeaponPermission_Implementation(APickableWeapon* _pickableWeapon) {
}
bool AFightingCharacter::ServerRequestPickWeaponPermission_Validate(APickableWeapon* _pickableWeapon) {
    return true;
}

void AFightingCharacter::ServerRepOnAvoidCapsuleHit_Implementation(int64 _iTimeOfLaunch, AActor* _capsuleOwner, FVector _vImpactPosition, FVector _vImpactDir) {
}
bool AFightingCharacter::ServerRepOnAvoidCapsuleHit_Validate(int64 _iTimeOfLaunch, AActor* _capsuleOwner, FVector _vImpactPosition, FVector _vImpactDir) {
    return true;
}

void AFightingCharacter::ServerRepNotifyGoodDodge_Implementation() {
}
bool AFightingCharacter::ServerRepNotifyGoodDodge_Validate() {
    return true;
}

void AFightingCharacter::ServerRepKilledBy_Implementation(AActor* _instigator, FName _killingAttack) {
}
bool AFightingCharacter::ServerRepKilledBy_Validate(AActor* _instigator, FName _killingAttack) {
    return true;
}

void AFightingCharacter::ServerRepAddStaminaBoostOnHit_Implementation(float _fStaminaBoost) {
}
bool AFightingCharacter::ServerRepAddStaminaBoostOnHit_Validate(float _fStaminaBoost) {
    return true;
}

void AFightingCharacter::ServerPullOutWeapon_Implementation(const FHandledWeaponInfo& HandledWeaponInfo) {
}
bool AFightingCharacter::ServerPullOutWeapon_Validate(const FHandledWeaponInfo& HandledWeaponInfo) {
    return true;
}

void AFightingCharacter::ServerOnPickUp_Implementation(APickUpActor* _pickedUpActor) {
}
bool AFightingCharacter::ServerOnPickUp_Validate(APickUpActor* _pickedUpActor) {
    return true;
}

void AFightingCharacter::ServerGrantProspectToAbsolver_Implementation() {
}
bool AFightingCharacter::ServerGrantProspectToAbsolver_Validate() {
    return true;
}


void AFightingCharacter::OnWeaponActorEndPlayCallback(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void AFightingCharacter::OnRep_WeaponDurability() {
}

void AFightingCharacter::OnRep_TransitionZoneId() {
}

void AFightingCharacter::OnRep_NbOfPlayersForGamemode() {
}

void AFightingCharacter::OnRep_MeditationTransform() {
}

void AFightingCharacter::OnRep_IsMeditationGhost() {
}

void AFightingCharacter::OnRep_IsAnAbsolver() {
}

void AFightingCharacter::OnRep_DepthMaskForGamemode() {
}

void AFightingCharacter::OnRep_AvailabilityDepthMaskForGamemode() {
}

void AFightingCharacter::OnEffectAddedOrRemovedInternalCallback(bool _bAdded, UEffectData* _effectDataAsset) {
}

void AFightingCharacter::OnCapsuleEndOverlap(UPrimitiveComponent* _overlappedComp, AActor* _otherActor, UPrimitiveComponent* _otherComponent, int32 _iOtherBodyIndex) {
}

void AFightingCharacter::OnCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComp, AActor* _otherActor, UPrimitiveComponent* _otherComponent, int32 _iOtherBodyIndex, bool _bFrommSweep, const FHitResult& _sweepResult) {
}

void AFightingCharacter::NetMulticastNotifyAISpawned_Implementation(bool _bIsRespawn) {
}

void AFightingCharacter::MulticastWeaponBreak_Implementation(int64 _iTimeOfBreak) {
}

void AFightingCharacter::MultiCastUpdateCharacterMesh_Implementation(USkeletalMesh* _mesh) {
}

void AFightingCharacter::MulticastSetFaction_Implementation(uint8 _uiFaction) {
}

void AFightingCharacter::MulticastRemoveEffect_Implementation(UEffectData* _effectData, int64 _iRemovalTimeTick) {
}

void AFightingCharacter::MulticastOnAvoidCapsuleHit_Implementation(int64 _iTimeOfLaunch, AActor* _hitInstigator, FVector _vImpactPosition, FVector _vImpactDir) {
}

void AFightingCharacter::MulticastLoadWeaponMesh_Implementation(const FHandledWeaponInfo& HandledWeaponInfo) {
}

void AFightingCharacter::MulticastKilledBy_Implementation(AActor* _instigator, FName _killingAttack) {
}
bool AFightingCharacter::MulticastKilledBy_Validate(AActor* _instigator, FName _killingAttack) {
    return true;
}

void AFightingCharacter::MulticastDisarm_Implementation(int64 _iTimeOfBreak, const FVector& _vFallDestination) {
}

void AFightingCharacter::MulticastAddEffect_Implementation(UEffectData* _effectData, int64 _iStartTimeTick) {
}

void AFightingCharacter::Hitted_Implementation(AActor* DamageInstigator, const FAttackDataRow& attackData, FVector ImpactPositionOnHitCapsule, FVector ImpactDir, bool IsGuarding, float StunTime, float Damage, bool _AbsorbBroken, bool _bIsPerfectLink, EHeight ImpactHeight, ECardinalPoints ImpactCardinalPoint, bool _bGuardBroken, bool bLethal, uint8 _uiHitNb, float _fSpecialDamageRatio, EImpactType _eImpactType) {
}

UPlayerFightingComponent* AFightingCharacter::GetPlayerComponent() const {
    return NULL;
}

int32 AFightingCharacter::GetInventorySize() {
    return 0;
}

UDefenseComponent* AFightingCharacter::GetDefenseComponent() {
    return NULL;
}

UAIFightingComponent* AFightingCharacter::GetAiComponent() const {
    return NULL;
}

void AFightingCharacter::GatherResourceChangedCallback(int32 _iNewAmount) {
}


void AFightingCharacter::ClientPickUpAnwer_Implementation(bool _bSucceeded) {
}

void AFightingCharacter::ClientNotifyPerfectLinkDismissed_Implementation(uint8 _uiOrderAttackID) {
}

void AFightingCharacter::ClientAddStaminaBoostOnHit_Implementation(float _fStaminaBoost) {
}

void AFightingCharacter::BPF_Unspawn() {
}

void AFightingCharacter::BPF_UnlockDepthForGamemode(uint8 _uiDepth) {
}

void AFightingCharacter::BPF_TeleportForce(const FVector& _destLocation, const FRotator& _destRotation, bool bForce) {
}

void AFightingCharacter::BPF_SpawnFootStepDecal_Implementation(UMaterialInterface* _decalMaterial, FVector _vSize, FVector _vLocation, float _fRadius, float _fDuration) {
}

void AFightingCharacter::BPF_SetShardsInfinite(bool _bIsInfinite) {
}

void AFightingCharacter::BPF_SetNoTransitionBetweenEmotes(bool _bValue) {
}

void AFightingCharacter::BPF_SetNbOfPlayersForGamemode(uint8 _uiNbOfPlayers) {
}

void AFightingCharacter::BPF_SetInvincibility(bool _bIsInvincible) {
}

void AFightingCharacter::BPF_SetGuardGaugeInfinite(bool _bIsInfinite) {
}

void AFightingCharacter::BPF_ServerSetBonusMaxHealth_Implementation(float _fHealth) {
}
bool AFightingCharacter::BPF_ServerSetBonusMaxHealth_Validate(float _fHealth) {
    return true;
}

void AFightingCharacter::BPF_RemoveDepthMaskForGamemode(uint8 _uiDepth) {
}

void AFightingCharacter::BPF_NotifyTeleport() {
}

bool AFightingCharacter::BPF_NeedClientReplicaFastDeath() const {
    return false;
}

void AFightingCharacter::BPF_MulticastRemoveEffect(UEffectData* _effectData, float _fPredictionTime) {
}

void AFightingCharacter::BPF_MulticastAddEffect(UEffectData* _effectData, float _fPredictionTime) {
}

void AFightingCharacter::BPF_LaunchImpact(float _fDamage, bool _bLethal, float _fStunTime) {
}

bool AFightingCharacter::BPF_IsShardsInfinite() {
    return false;
}

bool AFightingCharacter::BPF_IsMeditationGhost() const {
    return false;
}

bool AFightingCharacter::BPF_IsLocalTrainingMeditationGhost() const {
    return false;
}

bool AFightingCharacter::BPF_IsInOpeningLootBoxSequence() const {
    return false;
}

bool AFightingCharacter::BPF_IsGuardGaugeInfinite() {
    return false;
}

bool AFightingCharacter::BPF_IsGetUpDone() {
    return false;
}

bool AFightingCharacter::BPF_IsEquippedWeaponSheathed() const {
    return false;
}

bool AFightingCharacter::BPF_IsEquippedWeaponHandled() const {
    return false;
}

bool AFightingCharacter::BPF_IsDown() const {
    return false;
}

bool AFightingCharacter::BPF_IsAnAbsolver() const {
    return false;
}

float AFightingCharacter::BPF_HudGetCompassQuadrantAngle(int32 _iSampleIndex) {
    return 0.0f;
}

int32 AFightingCharacter::BPF_HudGetCompassNbSamples() {
    return 0;
}

int32 AFightingCharacter::BPF_HudGetCompassMinAlpha() {
    return 0;
}

bool AFightingCharacter::BPF_HasVisibleWeaponInHands() const {
    return false;
}

bool AFightingCharacter::BPF_HasValidTarget() {
    return false;
}

bool AFightingCharacter::BPF_HasPickedUpWeaponInHands() const {
    return false;
}

bool AFightingCharacter::BPF_HandledVisibleWeaponIsAttacking(const FAttackDataRow& _AttackData) const {
    return false;
}

void AFightingCharacter::BPF_GrantProspectToAbsolver() {
}

AWeaponActor* AFightingCharacter::BPF_GetWeaponActor(EWeaponSlot _eWeaponSlot) const {
    return NULL;
}

void AFightingCharacter::BPF_GetUp() {
}

UStatsComponent* AFightingCharacter::BPF_GetStatsComponent() const {
    return NULL;
}

USkeletalMeshComponent* AFightingCharacter::BPF_GetSkeletalMeshEquipment(EEquipmentSlot _eEquipmentSlot) {
    return NULL;
}

float AFightingCharacter::BPF_GetPickedUpWeaponDurabilityGauge() const {
    return 0.0f;
}

UBaseItemData* AFightingCharacter::BPF_GetInventoryItem(int32 _iIndex) {
    return NULL;
}

int32 AFightingCharacter::BPF_GetHealthFromVictimLevel_Implementation(AActor* _victim, bool _bAssistOnly, bool _bKillingBlow) const {
    return 0;
}

UHealthComponent* AFightingCharacter::BPF_GetHealthComponent() const {
    return NULL;
}

TArray<AWeaponActor*> AFightingCharacter::BPF_GetHandledWeaponActors() const {
    return TArray<AWeaponActor*>();
}

UVisibleWeaponData* AFightingCharacter::BPF_GetHandledVisibleWeapon() const {
    return NULL;
}

AWeaponActor* AFightingCharacter::BPF_GetFirstHandledWeaponActor() const {
    return NULL;
}

AWeaponActor* AFightingCharacter::BPF_GetFirstEquippedWeaponActor() const {
    return NULL;
}

float AFightingCharacter::BPF_GetEquippedWeaponDurabilityGauge() const {
    return 0.0f;
}

TArray<AWeaponActor*> AFightingCharacter::BPF_GetEquippedWeaponActors() const {
    return TArray<AWeaponActor*>();
}

UBaseWeaponData* AFightingCharacter::BPF_GetEquippedWeapon() const {
    return NULL;
}

void AFightingCharacter::BPF_GetDown() {
}

float AFightingCharacter::BPF_GetDamageReceivedMultiplierFromResource() const {
    return 0.0f;
}

float AFightingCharacter::BPF_GetDamageReceivedMultiplierFromBonusPoints() const {
    return 0.0f;
}

float AFightingCharacter::BPF_GetDamageMultiplierFromResource() const {
    return 0.0f;
}

float AFightingCharacter::BPF_GetDamageMultiplierFromBonusPoints() const {
    return 0.0f;
}

EWeaponAction AFightingCharacter::BPF_GetCurrentWeaponAction() {
    return EWeaponAction::Draw;
}

int32 AFightingCharacter::BPF_GetCurrentTotalResilience() const {
    return 0;
}

uint8 AFightingCharacter::BPF_GetCombatStyle() const {
    return 0;
}

UCameraComponentThird* AFightingCharacter::BPF_GetCameraThird() const {
    return NULL;
}

TArray<UEffectData*> AFightingCharacter::BPF_GetAllActiveEffects() {
    return TArray<UEffectData*>();
}

EWeaponFamilies AFightingCharacter::BPF_GetActiveWeaponFamily() const {
    return EWeaponFamilies::BareHands;
}

bool AFightingCharacter::BPF_EquippedWeaponDisarmed() const {
    return false;
}

void AFightingCharacter::BPF_DebugServerRemoveAbsolverStatus_Implementation() {
}
bool AFightingCharacter::BPF_DebugServerRemoveAbsolverStatus_Validate() {
    return true;
}

void AFightingCharacter::BPF_CharacterFullySpawned() {
}

void AFightingCharacter::BPF_ChangeSex(ECharacterSex _eSex) {
}

EDrawWeaponTestResult AFightingCharacter::BPF_CanDrawWeapon(UBaseWeaponData* _weaponData) const {
    return EDrawWeaponTestResult::CanDrawWeapon;
}

void AFightingCharacter::BPF_CancelEmoteOrder() {
}

void AFightingCharacter::BPF_AddToInventory(TArray<FLootBaseItemStruct> _loots) {
}

void AFightingCharacter::BPF_AddDepthMaskForGamemode(uint8 _uiDepth) {
}










































void AFightingCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFightingCharacter, m_uiTransitionZoneId);
    DOREPLIFETIME(AFightingCharacter, m_bIsMeditationGhost);
    DOREPLIFETIME(AFightingCharacter, m_MeditationTransform);
    DOREPLIFETIME(AFightingCharacter, m_bSpawnOccured);
    DOREPLIFETIME(AFightingCharacter, m_fHandledWeaponDurability);
    DOREPLIFETIME(AFightingCharacter, m_fWeaponRespawnWaitTotalTime);
    DOREPLIFETIME(AFightingCharacter, m_TargetRelativeLocation);
    DOREPLIFETIME(AFightingCharacter, m_AssociatedReviveInteractiveObject);
    DOREPLIFETIME(AFightingCharacter, m_bIsAnAbsolver);
    DOREPLIFETIME(AFightingCharacter, m_uiPawnCounter);
    DOREPLIFETIME(AFightingCharacter, m_uiNbOfPlayersForGameMode);
    DOREPLIFETIME(AFightingCharacter, m_uiDepthMaskForGameMode);
    DOREPLIFETIME(AFightingCharacter, m_uiAvailabilityDepthMaskForGameMode);
}


