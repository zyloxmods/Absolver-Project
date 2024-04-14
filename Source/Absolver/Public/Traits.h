#pragma once
#include "CoreMinimal.h"
#include "Traits.generated.h"

USTRUCT(BlueprintType)
struct FTraits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString ip_address;
    
    ABSOLVER_API FTraits();
};

