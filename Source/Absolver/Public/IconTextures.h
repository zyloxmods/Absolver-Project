#pragma once
#include "CoreMinimal.h"
#include "IconTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIconTextures {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_Textures[2];
    
    ABSOLVER_API FIconTextures();
};

