#include "SCUserWidget.h"

USCUserWidget::USCUserWidget() {
    this->m_ActiveVisibility = ESlateVisibility::Visible;
    this->m_Data = NULL;
    this->m_DataClass = NULL;
    this->m_eControllerInputModeVisibility = ESlateVisibility::Collapsed;
    this->m_eMouseInputModeVisibility = ESlateVisibility::Collapsed;
    this->m_eFocusedVisibility = ESlateVisibility::Collapsed;
    this->m_bNotifyPawnChanged = false;
    this->m_bNotifyUIInputModeChanged = false;
    this->m_bUpdateDataOnCharacterProgression = false;
}

void USCUserWidget::OnDataUpdated() {
}

void USCUserWidget::BPF_SetData(UWidgetData* _data) {
}

void USCUserWidget::BPF_PlayAnimationFromCurrentTime(UWidgetAnimation* _inAnimation, int32 _iNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode) {
}

void USCUserWidget::BPF_NotifyDataUpdatedToChildren(UPanelWidget* _root) {
}

void USCUserWidget::BPF_NotifyDataUpdated() {
}

bool USCUserWidget::BPF_IsVisibleInTree() {
    return false;
}

bool USCUserWidget::BPF_IsPlayerLeaderInPvpAndHasAllies() {
    return false;
}

void USCUserWidget::BPF_GiveFocusIfNeeded() {
}

EUIInputModes USCUserWidget::BPF_GetUIInputMode() const {
    return EUIInputModes::Controller;
}

UThePlainesGameInstance* USCUserWidget::BPF_GetThePlainesGameInstance() {
    return NULL;
}

UStatsComponent* USCUserWidget::BPF_GetStatsComponent() {
    return NULL;
}

USocialManager* USCUserWidget::BPF_GetSocialManager() {
    return NULL;
}

USocialComponent* USCUserWidget::BPF_GetSocialComponent() {
    return NULL;
}

FString USCUserWidget::BPF_GetPlayerName() {
    return TEXT("");
}

FString USCUserWidget::BPF_GetPlayerBuildName() {
    return TEXT("");
}

EPlatform USCUserWidget::BPF_GetPlatform() {
    return EPlatform::STEAM;
}

UMenuDB* USCUserWidget::BPF_GetMenuDB() {
    return NULL;
}

UMentoringManager* USCUserWidget::BPF_GetMentoringManager() {
    return NULL;
}

UInventoryComponent* USCUserWidget::BPF_GetInventoryComponent() {
    return NULL;
}

UHealthComponent* USCUserWidget::BPF_GetHealthComponent() {
    return NULL;
}

AFightingPlayerController* USCUserWidget::BPF_GetFightingPlayerController() {
    return NULL;
}

AFightingCharacter* USCUserWidget::BPF_GetFightingCharacter() {
    return NULL;
}

UDefenseComponent* USCUserWidget::BPF_GetDefenseComponent() {
    return NULL;
}

UWidgetData* USCUserWidget::BPF_GetData() {
    return NULL;
}

UWorld* USCUserWidget::BPF_GetCurrentWorld() {
    return NULL;
}

UAttackComponent* USCUserWidget::BPF_GetAttackComponent() {
    return NULL;
}

UAltarInteractionComponent* USCUserWidget::BPF_GetAltarInteractionComponent() {
    return NULL;
}

bool USCUserWidget::BPF_CheckControllerHasAnyFocus() {
    return false;
}




void USCUserWidget::BPE_OnPawnChanged_Implementation(AFightingCharacter* _character) {
}


void USCUserWidget::BPE_OnDataUpdated_Implementation() {
}

void USCUserWidget::BPE_GiveFocus_Implementation() {
}



