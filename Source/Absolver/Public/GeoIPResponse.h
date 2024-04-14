#pragma once
#include "CoreMinimal.h"
#include "Country.h"
#include "Geolocation.h"
#include "Traits.h"
#include "GeoIPResponse.generated.h"

USTRUCT(BlueprintType)
struct FGeoIPResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGeolocation Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTraits Traits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCountry Country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    ABSOLVER_API FGeoIPResponse();
};

