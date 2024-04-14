#pragma once
#include "CoreMinimal.h"
#include "AsyncTextureStruct.h"
#include "GetAsyncTextureAssetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FAsyncTextureStruct, FGetAsyncTextureAsset);

