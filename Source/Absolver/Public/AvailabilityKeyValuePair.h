#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFightingActionState.h"
#include "AvailabilityKeyValuePair.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable)
class ABSOLVER_API UAvailabilityKeyValuePair : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingActionState m_eFightingActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_Data;
    
    UAvailabilityKeyValuePair();

};

