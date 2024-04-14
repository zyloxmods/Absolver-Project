#pragma once
#include "CoreMinimal.h"
#include "AISCTeamStimulusEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ABSOLVER_API FAISCTeamStimulusEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Broadcaster;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
    FAISCTeamStimulusEvent();
};

