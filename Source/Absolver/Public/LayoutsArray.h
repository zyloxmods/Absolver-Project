#pragma once
#include "CoreMinimal.h"
#include "LayoutsArray.generated.h"

class ULayoutTemplate;

USTRUCT(BlueprintType)
struct FLayoutsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULayoutTemplate*> m_LayoutTemplates;
    
    ABSOLVER_API FLayoutsArray();
};

