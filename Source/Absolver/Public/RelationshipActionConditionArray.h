#pragma once
#include "CoreMinimal.h"
#include "RelationshipActionArray.h"
#include "RelationshipActionConditionArray.generated.h"

USTRUCT(BlueprintType)
struct FRelationshipActionConditionArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRelationshipActionArray m_Array[6];
    
    ABSOLVER_API FRelationshipActionConditionArray();
};

