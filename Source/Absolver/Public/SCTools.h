#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlatform.h"
#include "Engine/EngineTypes.h"
#include "BPUniqueNetId.h"
#include "Engine/LatentActionManager.h"
#include "BPUserID.h"
#include "EQuadrantTypes.h"
#include "SCTools.generated.h"

class AActor;
class APlayerState;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class ABSOLVER_API USCTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCTools();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EQuadrantTypes GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_UserIDEqual(const FBPUserID& _userID1, const FBPUserID& _userID2);
    
    UFUNCTION(BlueprintCallable)
    static FHitResult BPF_SearchForFloorSurface(const AActor* _searcher, const FVector& _vRefPoint, const float _fRaycastOffsetUp, const float _fRaycastOffsetDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsUserIDValid(const FBPUserID& _userID1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsDesktopPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetUserIDFromPlayerState(const APlayerState* _playerState, FBPUserID& _userID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetUserIDFromNetID(const FBPUniqueNetId& _netID, EPlatform _ePlatform, FBPUserID& _userID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BPF_GetMapPath(TSoftObjectPtr<UWorld> _map);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BPF_FadeWithoutWait(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void BPF_Fade(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo);
    
};

