#pragma once
#include "CoreMinimal.h"
#include "ELockActionCondition.h"
#include "RelationshipActionArray.generated.h"

USTRUCT(BlueprintType)
struct FRelationshipActionArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ELockActionCondition m_Array[8];
    
    ABSOLVER_API FRelationshipActionArray();
};

