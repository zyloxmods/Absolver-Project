#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavModifierComponent.h"
#include "SCNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USCNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    USCNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

