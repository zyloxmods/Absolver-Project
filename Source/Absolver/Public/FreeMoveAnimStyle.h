#pragma once
#include "CoreMinimal.h"
#include "FreeMoveAnimSpeedState.h"
#include "FreeMoveAnimStyle.generated.h"

USTRUCT(BlueprintType)
struct FFreeMoveAnimStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFreeMoveAnimSpeedState> m_Array;
    
    ABSOLVER_API FFreeMoveAnimStyle();
};

