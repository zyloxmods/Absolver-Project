#pragma once
#include "CoreMinimal.h"
#include "AttackSequence.h"
#include "AttackSequenceArray.generated.h"

USTRUCT(BlueprintType)
struct FAttackSequenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackSequence> m_AttackSequences;
    
    ABSOLVER_API FAttackSequenceArray();
};

