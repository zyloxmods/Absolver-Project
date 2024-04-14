#pragma once
#include "CoreMinimal.h"
#include "AvoidPropertyContainer.generated.h"

class UAvoidPropertyDB;

USTRUCT(BlueprintType)
struct ABSOLVER_API FAvoidPropertyContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvoidPropertyDB* m_AvoidPropertyDB[7];
    
    FAvoidPropertyContainer();
};

