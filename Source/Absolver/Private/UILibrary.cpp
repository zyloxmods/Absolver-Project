#include "UILibrary.h"

UUILibrary::UUILibrary() {
}

void UUILibrary::BPF_SetAllSCButtonsTintsInUserWidget(UUserWidget* _userWidget, FLinearColor _focusedColor, FLinearColor _noFocusColor) {
}

void UUILibrary::BPF_ProjectWorldLocationToScreen(APlayerController* _playerController, const FVector& _vInPosition, bool _bUseViewportBounds, float _fViewportBoundsOffset, FVector2D& _vOutScreenPosition, float& _fOutAngle, bool& _bOutIsOfScreen) {
}

bool UUILibrary::BPF_Intersect2DPositionWithViewportBounds(APlayerController* _playerController, const FVector2D& _vInPosition, FVector2D& _vOutIntersection, EIntersectDirection& _eOutIntersectDirection) {
    return false;
}

void UUILibrary::BPF_BlockOrUnblockInGameMenuKeys(ASCPlayerController* _controller, bool _bBlock) {
}


