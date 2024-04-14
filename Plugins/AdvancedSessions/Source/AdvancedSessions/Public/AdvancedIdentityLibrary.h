#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPUniqueNetId.h"
#include "BPUserOnlineAccount.h"
#include "EBPLoginStatus.h"
#include "EBlueprintResultSwitch.h"
#include "AdvancedIdentityLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedIdentityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, const FString& NewAttributeValue, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserID(const FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserAccountRealName(const FBPUserOnlineAccount& AccountInfo, FString& USERNAME);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserAccountDisplayName(const FBPUserOnlineAccount& AccountInfo, FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAccountAuthAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserAccountAccessToken(const FBPUserOnlineAccount& AccountInfo, FString& AccessToken);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAccount(const FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerNickname(const FBPUniqueNetId& UniqueNetId, FString& PlayerNickname);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerAuthToken(APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void GetLoginStatus(const FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllUserAccounts(TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);
    
};

