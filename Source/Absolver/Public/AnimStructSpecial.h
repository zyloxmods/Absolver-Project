#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructSpecial.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimStructSpecial : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRate2;
    
    FAnimStructSpecial();
};

