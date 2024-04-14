#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZoneComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UZoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UZoneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterCollisionComponent(UPrimitiveComponent* _startComponent, UPrimitiveComponent* _endComponent);
    
};

