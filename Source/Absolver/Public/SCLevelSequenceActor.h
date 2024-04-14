#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "SCLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ASCLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    ASCLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_Play();
    
};

