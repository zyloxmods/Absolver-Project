#pragma once
#include "CoreMinimal.h"
#include "BaseStatBindings.h"
#include "IntStatBinding.generated.h"

USTRUCT(BlueprintType)
struct FIntStatBinding : public FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iValue;
    
    ABSOLVER_API FIntStatBinding();
};

