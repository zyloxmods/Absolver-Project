#pragma once
#include "CoreMinimal.h"
#include "AdversarialGameMode.h"
#include "SCTeamGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API ASCTeamGameMode : public AAdversarialGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_NbPlayersWanted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iScoreLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMatchTime;
    
public:
    ASCTeamGameMode(const FObjectInitializer& ObjectInitializer);

};

