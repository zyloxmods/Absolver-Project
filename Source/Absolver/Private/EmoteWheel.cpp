#include "EmoteWheel.h"

UEmoteWheel::UEmoteWheel() {
    this->m_bNotifyPawnChanged = true;
    this->m_bEditable = false;
    this->m_bShowEmptySlots = true;
    this->m_uiOptimalEmoteNumberPerHalfWheel = 6;
    this->m_uiCustomEmoteExtraOffset = 1;
    this->m_TopWidgetSwitcher = NULL;
    this->m_FixedEmoteTabSwitcher = NULL;
    this->m_CustomEmotePanel = NULL;
    this->m_EmoteDescriptionTextBlock = NULL;
    this->m_RequestNotifTextBlock = NULL;
    this->m_RequestTabTextBlock = NULL;
    this->m_RequestTimeOutProgressBar = NULL;
    this->m_TooltipWidgetSwitcher = NULL;
    this->m_EmoteWheelItemClass = NULL;
    this->m_fCircleRadiusRatio = 0.80f;
    this->m_NoNickNameDefaultText = FText::FromString(TEXT("Unknown Fighter"));
    this->m_fSelectionFadeOutDuration = 0.50f;
    this->m_uiPixelRadiusTresholdForMouseSelection = 100;
    this->m_uiPixelRadiusExteriorTresholdForMouseSelection = 300;
}

void UEmoteWheel::OnEquippedEmoteChangedCallback(const FName& _emoteName, const uint8 _uiEmoteIndex) {
}

void UEmoteWheel::BPF_SwitchToNextTab() {
}

void UEmoteWheel::BPF_SetAndBuildNativeWidgets(UWidgetSwitcher* _TopWidgetSwitcher, UWidgetSwitcher* _FixedEmoteTabSwitcher, UCanvasPanel* _customEmotePanel, UTextBlock* _emoteDescriptionTextBlock, UTextBlock* _requestNotifTextBlock, UTextBlock* _requestTabTextBlock, UProgressBar* _requestTimeOut, UWidgetSwitcher* _tooltipWidgetSwitcher, const FVector2D& _vWheelSize) {
}

FVector2D UEmoteWheel::BPF_GetWheelCenter() const {
    return FVector2D{};
}








