#pragma once
#include "CoreMinimal.h"
#include "BaseStatBindings.h"
#include "FloatStatBinding.generated.h"

USTRUCT(BlueprintType)
struct FFloatStatBinding : public FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fValue;
    
    ABSOLVER_API FFloatStatBinding();
};

