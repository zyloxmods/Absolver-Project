#pragma once
#include "CoreMinimal.h"
#include "IndexModification.generated.h"

USTRUCT(BlueprintType)
struct FIndexModification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iOldIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNewIndex;
    
    ABSOLVER_API FIndexModification();
};

