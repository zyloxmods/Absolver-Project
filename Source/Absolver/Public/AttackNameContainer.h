#pragma once
#include "CoreMinimal.h"
#include "AttackNameContainer.generated.h"

USTRUCT(BlueprintType)
struct FAttackNameContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_attackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAnimMirror;
    
    ABSOLVER_API FAttackNameContainer();
};

