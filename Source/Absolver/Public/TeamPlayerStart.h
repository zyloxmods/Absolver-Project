#pragma once
#include "CoreMinimal.h"
#include "SCPlayerStart.h"
#include "TeamPlayerStart.generated.h"

UCLASS(Blueprintable)
class ATeamPlayerStart : public ASCPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSpawnTeam;
    
    ATeamPlayerStart(const FObjectInitializer& ObjectInitializer);

};

