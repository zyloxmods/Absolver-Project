#pragma once
#include "CoreMinimal.h"
#include "EEmoteAction.h"
#include "EmoteDataRow.h"
#include "SCUserWidget.h"
#include "EmoteWheelItem.generated.h"

class UAsyncImage;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEmoteWheelItem : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEmoteDataRow m_EmoteDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiEmoteSlotIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EmptyEmoteSlotIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_ActionlessEmotesMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_ActionEmotesMaterials[12];
    
public:
    UEmoteWheelItem();

    UFUNCTION(BlueprintCallable)
    void BPF_SetIconAndBackground(UAsyncImage* _materialBG, UAsyncImage* _icon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmoteActionValid(EEmoteAction _eEmoteAtion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAvailableForEdition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetEmoteIcon(const FEmoteDataRow& _emoteDataRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> BPF_GetEmoteActionMaterial(EEmoteAction _eEmoteAtion) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEmoteDataSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAvailabilityChanged(bool _bAvailable);
    
};

