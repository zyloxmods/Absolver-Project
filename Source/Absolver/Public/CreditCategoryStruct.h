#pragma once
#include "CoreMinimal.h"
#include "CreditContributorStruct.h"
#include "CreditCategoryStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FCreditCategoryStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditContributorStruct> m_Contributors;
    
    FCreditCategoryStruct();
};

