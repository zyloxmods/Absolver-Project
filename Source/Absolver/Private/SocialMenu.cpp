#include "SocialMenu.h"

USocialMenu::USocialMenu() {
    this->m_fFriendRefreshFrequency = 5.00f;
}

void USocialMenu::BPF_StopFriendRefreshTimer() {
}

void USocialMenu::BPF_StartFriendRefreshTimer() {
}

FString USocialMenu::BPF_GetError() {
    return TEXT("");
}

void USocialMenu::BPF_FillScrollBoxWithRecentPlayers(UPagingScrollBox* _pagingBox) {
}

void USocialMenu::BPF_FillScrollBoxWithFriends(UPagingScrollBox* _pagingBox, const TArray<EPlayerSorting>& _sorting, bool& _bSuccess) {
}

bool USocialMenu::BPF_CanInviteNewPlayers() {
    return false;
}




