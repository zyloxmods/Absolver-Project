#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GatherBossLaunchVolume.generated.h"

class APVEBossSituation;
class ATeamSequenceActor;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherBossLaunchVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APVEBossSituation* m_BossSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeamSequenceActor* m_IntroSequence;
    
public:
    AGatherBossLaunchVolume(const FObjectInitializer& ObjectInitializer);

};

