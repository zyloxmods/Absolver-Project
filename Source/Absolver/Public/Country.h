#pragma once
#include "CoreMinimal.h"
#include "Country.generated.h"

USTRUCT(BlueprintType)
struct FCountry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString iso_code;
    
    ABSOLVER_API FCountry();
};

