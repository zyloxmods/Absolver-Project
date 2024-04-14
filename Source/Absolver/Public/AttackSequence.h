#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "InputAction.h"
#include "AttackSequence.generated.h"

USTRUCT(BlueprintType)
struct FAttackSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eStartingQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiPatternWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSequenceUseCases;
    
    ABSOLVER_API FAttackSequence();
};

