#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Animation/Skeleton.h"
#include "Engine/EngineTypes.h"
#include "DynamicMaterialInput.h"
#include "DynamicMaterialsPerType.h"
#include "ECharacterSex.h"
#include "EControllerNature.h"
#include "EEquipmentSlot.h"
#include "EFXMaterials.h"
#include "EHeight.h"
#include "ERelationshipTypes.h"
#include "EWeaponSlot.h"
#include "SkeletalBodyParts.h"
#include "BaseCharacter.generated.h"

class AActor;
class APlayerState;
class UEquipmentData;
class UInventoryComponent;
class UMaterialInstanceDynamic;
class UObject;
class UOrderComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class USkinTonesDB;
class USocialComponent;

UCLASS(Blueprintable)
class ABSOLVER_API ABaseCharacter : public ACharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipementLoaded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipementLoaded OnEquipementLoaded;
    
protected:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshEquipment[10];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_SkeletalMeshBodyParts[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetSkinToneIndex, meta=(AllowPrivateAccess=true))
    uint8 m_uiSkinToneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialComponent* m_SocialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* m_InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_PendingAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNetworkActionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBuildUpMaxShrinkingFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiPredictionStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UEquipmentData*, UParticleSystemComponent*> m_EquipementParticleSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetSex, meta=(AllowPrivateAccess=true))
    ECharacterSex m_eSex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalBodyParts m_CharacterMeshes[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinTonesDB* m_SkinTones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderComponent* m_OrderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiLocalPawnCustomDepthStencilValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDynamicMaterialsPerType> m_DynamicMaterialsPerFxType;
    
public:
    ABaseCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSkinStoneIndex(uint8 _uiSkinTone);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetSkinToneIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetSex();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOutfitItemsReplicated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateDynamicMaterials(TArray<FDynamicMaterialInput> _ParametersInputs);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchBoneTranslationRetargetingMode(FName _boneName, TEnumAsByte<EBoneTranslationRetargetingMode::Type> _eNewRetargetingMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVectorValueOnMaterials(FName _parameterName, FLinearColor _value);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetupSKMeshCustomDepthValueForPVE(uint8 _UpperBodyValue, uint8 _LowerBodyValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSKMeshCustomDepthValue(uint8 _uiStencilValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSKMeshCustomDepth(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetScalarValueOnMaterials(FName _parameterName, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RecreateEquipmentParticles();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsCurrentGameModeCoopAlly(AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> BPF_GetSurfaceTypeFromWeaponSlot(EWeaponSlot _eWeaponSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USocialComponent* BPF_GetSocialComponent() const;
    
    UFUNCTION(BlueprintCallable)
    ECharacterSex BPF_GetSex();
    
    UFUNCTION(BlueprintCallable)
    ERelationshipTypes BPF_GetRelationship(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> BPF_GetOutfitSurfaceType(EEquipmentSlot _eEquipmentSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* BPF_GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> BPF_GetCurrentMaterialInstances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerNature BPF_GetControllerNature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> BPF_GetAverageOutfitSurfaceTypeFromHeight(EHeight _eHeight) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateDynamicMaterials(EFXMaterials _eFxType, bool _bFromItemLoading);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearEquipmentParticles();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ChangeSkinTone(uint8 _uiSkinTone, bool _bApplyToSave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SexChanged(ECharacterSex _eNewSex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PlayerStateInitialized(APlayerState* _playerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OutfitChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BodyPartsUpdated();
    
};

