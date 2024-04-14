#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SaveStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USaveStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetOnCreate;
    
    USaveStateComponent(const FObjectInitializer& ObjectInitializer);

};

