#include "LevelSequenceRoot.h"
#include "Components/SceneComponent.h"

ALevelSequenceRoot::ALevelSequenceRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


