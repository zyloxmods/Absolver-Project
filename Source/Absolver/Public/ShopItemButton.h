#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EEquipmentSlot.h"
#include "EShopButtonType.h"
#include "ShopItemButton.generated.h"

class UBaseItemData;
class UShopItemButton;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UShopItemButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShopItemButtonInput, UShopItemButton*, _button);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreviewButtonPressed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewButtonPressed OnPreviewButtonPressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_emoteName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipmentSlot m_eSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iFragmentPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iPrestigePointPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iGMLevelRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iGleamLevelRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bAbsolverRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bForceNotBuyable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EShopButtonType m_eButtonType;
    
public:
    UShopItemButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetType(EShopButtonType _Type);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetPrice(int32 _iFragmentPrice, int32 _iPrestigePointPrice, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterialIndex(int32 _iIndex, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetItem(UBaseItemData* _ItemData, EEquipmentSlot _eSlot, int32 _iItemSlot, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGMLevelRequired(int32 _iGMLevel, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGleamLevelRequired(int32 _iGleamLevel, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetForceNotBuyable(bool _bValue, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteName(const FName& _name, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAbsolverRequired(bool _bValue, bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlayEmoteAnim();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnPreviewButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsPlayingEmoteAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseItemData* BPF_GetItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetInventoryIcon(TSoftObjectPtr<UTexture2D>& _icon);
    
};

