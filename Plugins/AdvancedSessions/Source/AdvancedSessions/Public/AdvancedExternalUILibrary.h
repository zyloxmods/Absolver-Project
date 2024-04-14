#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPUniqueNetId.h"
#include "EBlueprintResultSwitch.h"
#include "AdvancedExternalUILibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedExternalUILibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowWebURLUI(const FString& URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable)
    static void ShowProfileUI(const FBPUniqueNetId PlayerViewingProfile, const FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLeaderBoardUI(const FString& LeaderboardName, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ShowInviteUI(APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ShowFriendsUI(APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ShowAccountUpgradeUI(const FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void CloseWebURLUI();
    
};

