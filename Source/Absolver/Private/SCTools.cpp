#include "SCTools.h"

USCTools::USCTools() {
}

EQuadrantTypes USCTools::GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror) {
    return EQuadrantTypes::FrontLeft;
}

bool USCTools::BPF_UserIDEqual(const FBPUserID& _userID1, const FBPUserID& _userID2) {
    return false;
}

FHitResult USCTools::BPF_SearchForFloorSurface(const AActor* _searcher, const FVector& _vRefPoint, const float _fRaycastOffsetUp, const float _fRaycastOffsetDown) {
    return FHitResult{};
}

bool USCTools::BPF_IsUserIDValid(const FBPUserID& _userID1) {
    return false;
}

bool USCTools::BPF_IsDesktopPlatform() {
    return false;
}

void USCTools::BPF_GetUserIDFromPlayerState(const APlayerState* _playerState, FBPUserID& _userID) {
}

void USCTools::BPF_GetUserIDFromNetID(const FBPUniqueNetId& _netID, EPlatform _ePlatform, FBPUserID& _userID) {
}

FString USCTools::BPF_GetMapPath(TSoftObjectPtr<UWorld> _map) {
    return TEXT("");
}

void USCTools::BPF_FadeWithoutWait(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack) {
}

void USCTools::BPF_Fade(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo) {
}


