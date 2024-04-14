#pragma once
#include "CoreMinimal.h"
#include "ButtonFocusedDelegate.generated.h"

class USCButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonFocused, USCButton*, _buttonFocused);

