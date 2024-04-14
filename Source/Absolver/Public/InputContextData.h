#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputContext.h"
#include "InputContextData.generated.h"

class UGenericInputData;

UCLASS(Blueprintable)
class UInputContextData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputContext m_contextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_InputActions;
    
    UInputContextData();

};

