#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "BaseStatBindings.generated.h"

USTRUCT(BlueprintType)
struct FBaseStatBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateColor m_ComparisonColor;
    
    ABSOLVER_API FBaseStatBindings();
};

