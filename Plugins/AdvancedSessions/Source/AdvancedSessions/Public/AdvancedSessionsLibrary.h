#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "BPUniqueNetId.h"
#include "EBPOnlineSessionState.h"
#include "EBlueprintResultSwitch.h"
#include "EOnlineComparisonOpRedux.h"
#include "ESessionSettingSearchResult.h"
#include "SessionPropertyKeyPair.h"
#include "SessionsSearchSetting.h"
#include "AdvancedSessionsLibrary.generated.h"

class APlayerController;
class APlayerState;
class UObject;

UCLASS(Blueprintable)
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedSessionsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void UniqueNetIdToString(const FBPUniqueNetId& UniqueNetId, FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerName(APlayerController* PlayerController, const FString& PlayerName);
    
  //  UFUNCTION(BlueprintCallable, BlueprintPure)
//    static FSessionsSearchSetting MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
    /*
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyString(FName Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(FName Key, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(FName Key, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(FName Key, uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(FName Key, bool Value);
    */
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidUniqueNetID(const FBPUniqueNetId& UniqueNetId);
    
    //UFUNCTION(BlueprintCallable, BlueprintPure)
  //  static bool IsValidSession(const FBlueprintSessionResult& SessionResult);
    
    UFUNCTION(BlueprintCallable)
    static void IsPlayerInSession(const FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasOnlineSubsystem(FName SubSystemName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUniqueNetIDFromPlayerState(APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);
    
   // UFUNCTION(BlueprintCallable, BlueprintPure)
 //   static void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32& UniqueBuildId);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionState(EBPOnlineSessionState& SessionState);
    /*
    UFUNCTION(BlueprintCallable)
    static void GetSessionSettings(int32& NumConnections, int32& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyString(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyInt(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32& SettingValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyFloat(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyByte(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, uint8& SettingValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionPropertyBool(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue);
    */
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerName(APlayerController* PlayerController, FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetNumberOfNetworkPlayers(UObject* WorldContextObject, int32& NumNetPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNetPlayerIndex(APlayerController* PlayerController, int32& NetPlayerIndex);
    
    //UFUNCTION(BlueprintCallable)
   // static void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentUniqueBuildID(int32& UniqueBuildId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_UNetIDUnetID(const FBPUniqueNetId& A, const FBPUniqueNetId& B);
    
   // UFUNCTION(BlueprintCallable)
 //   static void AddOrModifyExtraSettings(UPARAM(Ref) TArray<FSessionPropertyKeyPair>& SettingsArray, UPARAM(Ref) TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray);
    
};

