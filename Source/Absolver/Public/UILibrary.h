#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "EIntersectDirection.h"
#include "UILibrary.generated.h"

class APlayerController;
class ASCPlayerController;
class UUserWidget;

UCLASS(Blueprintable)
class ABSOLVER_API UUILibrary : public UWidgetBlueprintLibrary {
    GENERATED_BODY()
public:
    UUILibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void BPF_SetAllSCButtonsTintsInUserWidget(UUserWidget* _userWidget, FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ProjectWorldLocationToScreen(APlayerController* _playerController, const FVector& _vInPosition, bool _bUseViewportBounds, float _fViewportBoundsOffset, FVector2D& _vOutScreenPosition, float& _fOutAngle, bool& _bOutIsOfScreen);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_Intersect2DPositionWithViewportBounds(APlayerController* _playerController, const FVector2D& _vInPosition, FVector2D& _vOutIntersection, EIntersectDirection& _eOutIntersectDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void BPF_BlockOrUnblockInGameMenuKeys(ASCPlayerController* _controller, bool _bBlock);
    
};

