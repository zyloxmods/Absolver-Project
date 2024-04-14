#pragma once
#include "CoreMinimal.h"
#include "EResourceAreaStatus.h"
#include "SCTeamGameMode.h"
#include "ResourcesGameMode.generated.h"

class AResourceArea;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API AResourcesGameMode : public ASCTeamGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbZoneActiveAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBetweenAreaActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNeededDelayToScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScoreUpForFirstPlayerOnArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScoreUpForAdditionalPlayerOnArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScoreLimitBeforeCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScoreRewardForCapture;
    
public:
    AResourcesGameMode(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnResourceAreaStatusChanged(AResourceArea* _resourceArea, EResourceAreaStatus _eNewStatus);
    
};

