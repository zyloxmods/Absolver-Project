#pragma once
#include "CoreMinimal.h"
#include "CreditCategoryStruct.h"
#include "CreditCompanyStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FCreditCompanyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CompanyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditCategoryStruct> m_Categories;
    
    FCreditCompanyStruct();
};

