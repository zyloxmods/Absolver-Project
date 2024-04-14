#include "InGameNotification.h"

UInGameNotification::UInGameNotification() {
}

void UInGameNotification::OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu) {
}

void UInGameNotification::BPF_ShowNextNotification() {
}

void UInGameNotification::BPF_PushNotification(UBaseNotification* _notification) {
}

void UInGameNotification::BPF_PopNotification() {
}

void UInGameNotification::BPF_EnableOpenMenu() {
}

void UInGameNotification::BPF_DisableOpenMenu() {
}

void UInGameNotification::BPF_ClearPendingNotificationOfTypes(TArray<UClass*> _NotificationTypes) {
}








UAttackProgressNotification* UInGameNotification::BPE_FindOrCreateAttackProgressNotification(const FName& _AttackName) {
    return NULL;
}


