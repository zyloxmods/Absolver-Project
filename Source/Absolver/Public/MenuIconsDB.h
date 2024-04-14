#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerIcons.h"
#include "EEquipmentSlot.h"
#include "EWeaponFamilies.h"
#include "EquipmentCategoryInfos.h"
#include "MenuIconsDB.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API UMenuIconsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotDefaultIcons[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotSelectedIcons[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_WeaponDefaultIcons[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_WeaponSelectedIcons[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemDefaultIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemSelectedIcons;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_MiniWeaponIcons[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EmptyMiniWeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_FightingStyleMiniIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerIcons> m_ControllerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerIcons m_DefaultControllerIcons;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_WeaponFamilyInfos[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_EmptyWeaponFamilyInfos;
    
    UMenuIconsDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FControllerIcons GetControllerIcons(FName _controllerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetMiniIconForFightingStyle(int32 _iFightingStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetIconForEquipmentSlot(EEquipmentSlot _eEquipmentSlot, bool _bSelected, EWeaponFamilies _eWeaponFamily, int32 _itemIndex);
    
};

