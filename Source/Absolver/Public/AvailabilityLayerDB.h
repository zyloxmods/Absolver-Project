#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AvailabilityLayerDB.generated.h"

class UAvailabilityKeyValuePair;
class UAvailabilityLayerData;

UCLASS(Blueprintable)
class ABSOLVER_API UAvailabilityLayerDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAvailabilityKeyValuePair*> m_pairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_defaultLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_NoActionLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_NothingLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_FallLayerData;
    
    UAvailabilityLayerDB();

};

