#pragma once
#include "CoreMinimal.h"
#include "SCInt32Range.generated.h"

USTRUCT(BlueprintType)
struct FSCInt32Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMax;
    
    ABSOLVER_API FSCInt32Range();
};

