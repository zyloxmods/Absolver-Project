#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructDodge.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimStructDodge : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRate2;
    
    FAnimStructDodge();
};

