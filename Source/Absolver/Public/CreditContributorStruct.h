#pragma once
#include "CoreMinimal.h"
#include "CreditContributorStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FCreditContributorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FirstName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LastName;
    
    FCreditContributorStruct();
};

