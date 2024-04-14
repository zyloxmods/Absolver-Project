#pragma once
#include "CoreMinimal.h"
#include "Geolocation.generated.h"

USTRUCT(BlueprintType)
struct FGeolocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double latitude;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double longitude;
    
    ABSOLVER_API FGeolocation();
};

