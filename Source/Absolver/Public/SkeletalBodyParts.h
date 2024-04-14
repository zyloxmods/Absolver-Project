#pragma once
#include "CoreMinimal.h"
#include "SkeletalBodyParts.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSkeletalBodyParts {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_BodyParts[8];
    
    ABSOLVER_API FSkeletalBodyParts();
};

