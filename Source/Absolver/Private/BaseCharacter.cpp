#include "BaseCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "OrderComponent.h"
#include "SocialComponent.h"

ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SkeletalMeshEquipment[0] = NULL;
    this->m_SkeletalMeshEquipment[1] = NULL;
    this->m_SkeletalMeshEquipment[2] = NULL;
    this->m_SkeletalMeshEquipment[3] = NULL;
    this->m_SkeletalMeshEquipment[4] = NULL;
    this->m_SkeletalMeshEquipment[5] = NULL;
    this->m_SkeletalMeshEquipment[6] = NULL;
    this->m_SkeletalMeshEquipment[7] = NULL;
    this->m_SkeletalMeshEquipment[8] = NULL;
    this->m_SkeletalMeshEquipment[9] = NULL;
    this->m_SkeletalMeshBodyParts[0] = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("head"));
    this->m_uiSkinToneIndex = 0;
    this->m_SocialComponent = CreateDefaultSubobject<USocialComponent>(TEXT("SocialComponent"));
    this->m_InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->m_fNetworkActionDelay = 0.00f;
    this->m_iBuildUpMaxShrinkingFrames = 3;
    this->m_uiPredictionStep = 3;
    this->m_eSex = ECharacterSex::None;
    this->m_SkinTones = NULL;
    this->m_OrderComponent = CreateDefaultSubobject<UOrderComponent>(TEXT("OrderComponent"));
    this->m_uiLocalPawnCustomDepthStencilValue = 255;
}

void ABaseCharacter::ServerSetSkinStoneIndex_Implementation(uint8 _uiSkinTone) {
}
bool ABaseCharacter::ServerSetSkinStoneIndex_Validate(uint8 _uiSkinTone) {
    return true;
}

void ABaseCharacter::OnRep_SetSkinToneIndex() {
}

void ABaseCharacter::OnRep_SetSex() {
}

void ABaseCharacter::OnOutfitItemsReplicated() {
}

bool ABaseCharacter::IsDead() const {
    return false;
}

void ABaseCharacter::BPF_UpdateDynamicMaterials(TArray<FDynamicMaterialInput> _ParametersInputs) {
}

void ABaseCharacter::BPF_SwitchBoneTranslationRetargetingMode(FName _boneName, TEnumAsByte<EBoneTranslationRetargetingMode::Type> _eNewRetargetingMode) {
}

void ABaseCharacter::BPF_SetVectorValueOnMaterials(FName _parameterName, FLinearColor _value) {
}

void ABaseCharacter::BPF_SetupSKMeshCustomDepthValueForPVE(uint8 _UpperBodyValue, uint8 _LowerBodyValue) {
}

void ABaseCharacter::BPF_SetSKMeshCustomDepthValue(uint8 _uiStencilValue) {
}

void ABaseCharacter::BPF_SetSKMeshCustomDepth(bool _bActivate) {
}

void ABaseCharacter::BPF_SetScalarValueOnMaterials(FName _parameterName, float _fValue) {
}

void ABaseCharacter::BPF_RecreateEquipmentParticles() {
}

bool ABaseCharacter::BPF_IsCurrentGameModeCoopAlly(AActor* _otherActor) {
    return false;
}

TEnumAsByte<EPhysicalSurface> ABaseCharacter::BPF_GetSurfaceTypeFromWeaponSlot(EWeaponSlot _eWeaponSlot) const {
    return SurfaceType_Default;
}

USocialComponent* ABaseCharacter::BPF_GetSocialComponent() const {
    return NULL;
}

ECharacterSex ABaseCharacter::BPF_GetSex() {
    return ECharacterSex::Man;
}

ERelationshipTypes ABaseCharacter::BPF_GetRelationship(AActor* _actor) {
    return ERelationshipTypes::Enemy;
}

TEnumAsByte<EPhysicalSurface> ABaseCharacter::BPF_GetOutfitSurfaceType(EEquipmentSlot _eEquipmentSlot) const {
    return SurfaceType_Default;
}

UInventoryComponent* ABaseCharacter::BPF_GetInventoryComponent() const {
    return NULL;
}

TArray<UMaterialInstanceDynamic*> ABaseCharacter::BPF_GetCurrentMaterialInstances() {
    return TArray<UMaterialInstanceDynamic*>();
}

EControllerNature ABaseCharacter::BPF_GetControllerNature() const {
    return EControllerNature::Player;
}

TEnumAsByte<EPhysicalSurface> ABaseCharacter::BPF_GetAverageOutfitSurfaceTypeFromHeight(EHeight _eHeight) const {
    return SurfaceType_Default;
}

void ABaseCharacter::BPF_CreateDynamicMaterials(EFXMaterials _eFxType, bool _bFromItemLoading) {
}

void ABaseCharacter::BPF_ClearEquipmentParticles() {
}

bool ABaseCharacter::BPF_ChangeSkinTone(uint8 _uiSkinTone, bool _bApplyToSave) {
    return false;
}





void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseCharacter, m_uiSkinToneIndex);
    DOREPLIFETIME(ABaseCharacter, m_eSex);
}


