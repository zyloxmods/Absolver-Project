#pragma once
#include "CoreMinimal.h"
#include "AsyncTextureStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ABSOLVER_API FAsyncTextureStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;
    
    FAsyncTextureStruct();
};

