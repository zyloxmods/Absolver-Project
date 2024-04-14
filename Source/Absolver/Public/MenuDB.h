#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerIcons.h"
#include "EAvoidType.h"
#include "EEquipmentSlot.h"
#include "EGameModeTypes.h"
#include "EIconStyle.h"
#include "ELeaderboardTiers.h"
#include "ELeaderboardTypes.h"
#include "EMatchMakingStatus.h"
#include "EParrySide.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "EquipmentCategoryInfos.h"
#include "IconTextures.h"
#include "LeaderboardTierIcons.h"
#include "MenuDB.generated.h"

class AFightingCharacter;
//class UAkAudioEvent;
class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API UMenuDB : public UDataAsset {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //UAkAudioEvent* m_AudioMove;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //UAkAudioEvent* m_AudioValidate;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //UAkAudioEvent* m_AudioBack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_WeaponFamilyInfos[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_EquipmentSlotInfos[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentCategoryInfos> m_ItemSlotInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_EmptyCategoryInfos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AvoidIcons[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_ParryIcons[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AbsorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_GuardBreakIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_DiscipleIcon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_GameModeInfos[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerIcons> m_ControllerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerIcons m_DefaultControllerIcons;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_MatchMakingStatusDescriptions[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_QuadrantSelectionIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconTextures m_QuadrantIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconTextures m_StanceIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaderboardTierIcons m_LeaderboardTierIcons[3];
    
    UMenuDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_LeaderboardTierIcons(ELeaderboardTypes _eType, ELeaderboardTiers _eTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetWeaponIcon(AFightingCharacter* Character, bool _bSelected, EWeaponFamilies _eWeaponFamily, bool _bUseEquipmentIconIfEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetStanceIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetQuadrantSelectionIcon(EQuadrantTypes _eQuadrant) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetMatchMakingStatusDescription(EMatchMakingStatus _eStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetGameModeInfos(const EGameModeTypes _eGameMode, FEquipmentCategoryInfos& _OutInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetEquipmentCategoryInfos(FEquipmentCategoryInfos& _OutCategoryInfos, EEquipmentSlot _eEquipmentSlot, EWeaponFamilies _eWeaponFamily, int32 _itemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetAttackParryIcon(EParrySide _eParrySide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetAttackAvoidIcon(EAvoidType _eAvoidType) const;
    
};

