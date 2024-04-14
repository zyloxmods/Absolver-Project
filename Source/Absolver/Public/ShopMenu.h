#pragma once
#include "CoreMinimal.h"
#include "CharacterStatsBindings.h"
#include "ECharacterSex.h"
#include "ECycleDirection.h"
#include "EEquipmentSlot.h"
#include "EStatsAppliedMode.h"
#include "EquipmentStruct.h"
#include "MenuWidget.h"
#include "ShopMenu.generated.h"

class AFightingCharacter;
class UBaseItemData;
class UEquipmentData;
class UObject;
class UPagingScrollBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UShopMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsBindings m_CurrentCharacterStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsBindings m_PreviewCharacterStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlot> m_Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentData* m_NullData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentStruct> m_PreviewOutfits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEquipmentData*> m_Hairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iHairColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_HairDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFightingCharacter* m_char;
    
public:
    UShopMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemLoaded(const TArray<TSoftObjectPtr<UObject>>& _items);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateStats(EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetPreviewEquipment();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewEquipment(UBaseItemData* _item, int32 _iMaterialIndex, EEquipmentSlot _eSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_PreloadAssets();
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitHairIndex(int32 _iHairCutIndex, int32 _iHairColorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetWidgetFromItemData(UPagingScrollBox* _ScrollBox, UBaseItemData* _data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetSkinToneIndex(AFightingCharacter* _char);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentSlot BPF_GetNextSlot(EEquipmentSlot _eSlot, ECycleDirection _eDirection, int32 _iOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetHairCutIndex(AFightingCharacter* _char);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetHairColorIndex(AFightingCharacter* _char);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeSkinTone(AFightingCharacter* _char, uint8 _uiSkinTone);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeSex(AFightingCharacter* _char, ECharacterSex _eSex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeHair(AFightingCharacter* _char, int32 _iHairIndex, int32 _iColorIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_CanValidate(AFightingCharacter* _char, ECharacterSex _eSex, uint8 _uiSkinTone, int32 _iHairCutIndex, int32 _iHairColorIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyAppearanceChange(AFightingCharacter* _char, ECharacterSex _eSex, uint8 _uiSkinTone, int32 _iHairCutIndex, int32 _iHairColorIndex);
    
};

