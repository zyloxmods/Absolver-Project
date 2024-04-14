#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "FreeMoveAnimSex.generated.h"

USTRUCT(BlueprintType)
struct FFreeMoveAnimSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ContainerArray[2];
    
    ABSOLVER_API FFreeMoveAnimSex();
};

