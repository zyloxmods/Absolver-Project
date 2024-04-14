#include "AdvancedExternalUILibrary.h"

UAdvancedExternalUILibrary::UAdvancedExternalUILibrary() {
}

void UAdvancedExternalUILibrary::ShowWebURLUI(const FString& URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY) {
}

void UAdvancedExternalUILibrary::ShowProfileUI(const FBPUniqueNetId PlayerViewingProfile, const FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowLeaderBoardUI(const FString& LeaderboardName, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowInviteUI(APlayerController* PlayerController, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowFriendsUI(APlayerController* PlayerController, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowAccountUpgradeUI(const FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::CloseWebURLUI() {
}


