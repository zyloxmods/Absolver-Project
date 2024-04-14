#include "EmoteWheelItem.h"

UEmoteWheelItem::UEmoteWheelItem() {
    this->m_bEditable = false;
    this->m_bIsFocused = false;
    this->m_bIsAvailable = true;
    this->m_uiEmoteSlotIndex = 255;
}

void UEmoteWheelItem::BPF_SetIconAndBackground(UAsyncImage* _materialBG, UAsyncImage* _icon) {
}

bool UEmoteWheelItem::BPF_IsEmoteActionValid(EEmoteAction _eEmoteAtion) const {
    return false;
}

bool UEmoteWheelItem::BPF_IsAvailableForEdition() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UEmoteWheelItem::BPF_GetEmoteIcon(const FEmoteDataRow& _emoteDataRow) const {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> UEmoteWheelItem::BPF_GetEmoteActionMaterial(EEmoteAction _eEmoteAtion) const {
    return NULL;
}






