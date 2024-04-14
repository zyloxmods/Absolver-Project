#include "AdvancedSessionsLibrary.h"

UAdvancedSessionsLibrary::UAdvancedSessionsLibrary() {
}

void UAdvancedSessionsLibrary::UniqueNetIdToString(const FBPUniqueNetId& UniqueNetId, FString& String) {
}

void UAdvancedSessionsLibrary::SetPlayerName(APlayerController* PlayerController, const FString& PlayerName) {
}
/*
FSessionsSearchSetting UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp) {
    return FSessionsSearchSetting{};
}

FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(FName Key, const FString& Value) {
    return FSessionPropertyKeyPair{};
}

FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(FName Key, int32 Value) {
    return FSessionPropertyKeyPair{};
}

FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(FName Key, float Value) {
    return FSessionPropertyKeyPair{};
}

FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(FName Key, uint8 Value) {
    return FSessionPropertyKeyPair{};
}

FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(FName Key, bool Value) {
    return FSessionPropertyKeyPair{};
}*/

bool UAdvancedSessionsLibrary::IsValidUniqueNetID(const FBPUniqueNetId& UniqueNetId) {
    return false;
}
/*
bool UAdvancedSessionsLibrary::IsValidSession(const FBlueprintSessionResult& SessionResult) {
    return false;
}
*/
void UAdvancedSessionsLibrary::IsPlayerInSession(const FBPUniqueNetId& PlayerToCheck, bool& bIsInSession) {
}

bool UAdvancedSessionsLibrary::HasOnlineSubsystem(FName SubSystemName) {
    return false;
}

void UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId) {
}

void UAdvancedSessionsLibrary::GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId) {
}

//void UAdvancedSessionsLibrary::GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32& UniqueBuildId) {
//}

void UAdvancedSessionsLibrary::GetSessionState(EBPOnlineSessionState& SessionState) {
}
/*
void UAdvancedSessionsLibrary::GetSessionSettings(int32& NumConnections, int32& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result) {
}

void UAdvancedSessionsLibrary::GetSessionPropertyString(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue) {
}

void UAdvancedSessionsLibrary::GetSessionPropertyInt(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32& SettingValue) {
}

void UAdvancedSessionsLibrary::GetSessionPropertyFloat(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue) {
}

void UAdvancedSessionsLibrary::GetSessionPropertyByte(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, uint8& SettingValue) {
}

void UAdvancedSessionsLibrary::GetSessionPropertyBool(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue) {
}*/

void UAdvancedSessionsLibrary::GetPlayerName(APlayerController* PlayerController, FString& PlayerName) {
}

void UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(UObject* WorldContextObject, int32& NumNetPlayers) {
}

void UAdvancedSessionsLibrary::GetNetPlayerIndex(APlayerController* PlayerController, int32& NetPlayerIndex) {
}
/*
void UAdvancedSessionsLibrary::GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings) {
}
*/
void UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(int32& UniqueBuildId) {
}

bool UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(const FBPUniqueNetId& A, const FBPUniqueNetId& B) {
    return false;
}
/*
void UAdvancedSessionsLibrary::AddOrModifyExtraSettings(TArray<FSessionPropertyKeyPair>& SettingsArray, TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray) {
}*/


