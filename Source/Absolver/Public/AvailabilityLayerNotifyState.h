#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "AvailabilityLayerNotifyState.generated.h"

class UAvailabilityLayerData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UAvailabilityLayerNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_alName;
    
    UAvailabilityLayerNotifyState();

};

