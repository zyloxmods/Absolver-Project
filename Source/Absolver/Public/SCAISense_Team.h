#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISCTeamStimulusEvent.h"
#include "SCAISense_Team.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USCAISense_Team : public UAISense {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISCTeamStimulusEvent> m_RegisteredEvents;
    
public:
    USCAISense_Team();

};

