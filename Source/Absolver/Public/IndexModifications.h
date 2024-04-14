#pragma once
#include "CoreMinimal.h"
#include "IndexModification.h"
#include "IndexModifications.generated.h"

USTRUCT(BlueprintType)
struct FIndexModifications {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndexModification> m_indexModifications;
    
    ABSOLVER_API FIndexModifications();
};

