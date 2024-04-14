#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputAction.h"
#include "GenericInputData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UGenericInputData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStackable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeSpan;
    
    UGenericInputData();

};

