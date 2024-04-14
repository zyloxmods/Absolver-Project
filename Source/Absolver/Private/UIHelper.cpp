#include "UIHelper.h"

UUIHelper::UUIHelper() {
}

void UUIHelper::UpdateXPProgressBar(int32 _iCurrentLevelXp, int32 _iNextLevelXp, int32 _iStartXP, int32 _iIncrementXP, float _fProgress, float _fDuration, float _fDelta, float& _fNewProgress, float& _fLevelProgress, int32& _iCurrentXP) {
}

void UUIHelper::LerpXPProgressBar(int32 _iCurrentLevelXp, int32 _iNextLevelXp, int32 _iStartXP, int32 _iIncrementXP, float _fProgress, float _fProgressDelta, float& _fLevelProgress, int32& _iCurrentXP, bool& _bLevelUp, int32 _iLoopXP) {
}

void UUIHelper::FocusWidget(UWidget* _widget) {
}

void UUIHelper::FocusFirstFocusableWidget(TArray<UWidget*> _widgets) {
}

void UUIHelper::BPF_StopAllAnimations(UUserWidget* _widget) {
}

void UUIHelper::BPF_SetLastFocusedButton(UWidget* _lastFocusedButton) {
}

void UUIHelper::BPF_SetAutoWrapTextBlock(UTextBlock* _textBlock, bool _bAutoWrap) {
}

void UUIHelper::BPF_RefreshButtonFocus() {
}

UWidget* UUIHelper::BPF_GetNextWidgetInArray(const TArray<UWidget*>& _widgets, UWidget* _currentWidget, ECycleDirection _eDirection, bool _bSkipDisabled) {
    return NULL;
}

uint8 UUIHelper::BPF_GetNextIndex(uint8 _uiCurrentIndex, ECycleDirection _eDirection, uint8 _uiLimitValue, bool _bLoopAtLimit, bool _bIncludeLimit) {
    return 0;
}

UWidget* UUIHelper::BPF_GetNextChildWidget(UPanelWidget* container, UWidget* currentWidget, ECycleDirection _eDirection, bool _bSkipDisabled) {
    return NULL;
}

EUIInputModes UUIHelper::BPF_GetLastNavigationMode() {
    return EUIInputModes::Controller;
}

bool UUIHelper::BPF_GetIsPIE() {
    return false;
}

bool UUIHelper::BPF_GetIsEditor() {
    return false;
}

UWidget* UUIHelper::BPF_GetFocusedButton() {
    return NULL;
}

UButtonUserWidget* UUIHelper::BPF_FindSelectedChildButton(UPanelWidget* _panel) {
    return NULL;
}

UButtonUserWidget* UUIHelper::BPF_FindSelectedButtonInArray(const TArray<UWidget*>& _widgets) {
    return NULL;
}

void UUIHelper::BPF_EndAnimation(UUserWidget* _widget, UWidgetAnimation* _animation) {
}

void UUIHelper::BPF_EndAllAnimations(UUserWidget* _widget) {
}

void UUIHelper::BPF_DeselectAllChildButtons(UPanelWidget* _panel) {
}

UWidget* UUIHelper::BPF_CycleChildren(UPanelWidget* _panel, UWidget* _currentChild, ECycleDirection _eDirection, bool _bSkipDisabled) {
    return NULL;
}

void UUIHelper::BPF_ClearUserFocus() {
}


