#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MessengerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UMessengerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMessengerComponent(const FObjectInitializer& ObjectInitializer);

};

