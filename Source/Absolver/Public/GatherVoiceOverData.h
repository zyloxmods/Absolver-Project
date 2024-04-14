#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GenericVoiceOverPerTheme.h"
#include "VoiceOver.h"
#include "GatherVoiceOverData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UGatherVoiceOverData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceOver m_StatueObjectiveVoiceOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericVoiceOverPerTheme> m_VoiceOverPerTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayAfterEnterSas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayAfterCompleteMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVoiceOverProbability;
    
    UGatherVoiceOverData();

};

