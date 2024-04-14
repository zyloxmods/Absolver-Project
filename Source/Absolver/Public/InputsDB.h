#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputsDB.generated.h"

class UInputContextData;

UCLASS(Blueprintable)
class ABSOLVER_API UInputsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputContextData* m_contexts[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartStabilizationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStopStabilizationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fThresholdInputDiffForStabilisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStickThresholdBetweenV1V2;
    
    UInputsDB();

};

