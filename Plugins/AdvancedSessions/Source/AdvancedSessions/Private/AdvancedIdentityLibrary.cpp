#include "AdvancedIdentityLibrary.h"

UAdvancedIdentityLibrary::UAdvancedIdentityLibrary() {
}

void UAdvancedIdentityLibrary::SetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, const FString& NewAttributeValue, EBlueprintResultSwitch& Result) {
}

void UAdvancedIdentityLibrary::GetUserID(const FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId) {
}

void UAdvancedIdentityLibrary::GetUserAccountRealName(const FBPUserOnlineAccount& AccountInfo, FString& USERNAME) {
}

void UAdvancedIdentityLibrary::GetUserAccountDisplayName(const FBPUserOnlineAccount& AccountInfo, FString& DisplayName) {
}

void UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result) {
}

void UAdvancedIdentityLibrary::GetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result) {
}

void UAdvancedIdentityLibrary::GetUserAccountAccessToken(const FBPUserOnlineAccount& AccountInfo, FString& AccessToken) {
}

void UAdvancedIdentityLibrary::GetUserAccount(const FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result) {
}

void UAdvancedIdentityLibrary::GetPlayerNickname(const FBPUniqueNetId& UniqueNetId, FString& PlayerNickname) {
}

void UAdvancedIdentityLibrary::GetPlayerAuthToken(APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result) {
}

void UAdvancedIdentityLibrary::GetLoginStatus(const FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result) {
}

void UAdvancedIdentityLibrary::GetAllUserAccounts(TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result) {
}


