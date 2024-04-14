#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PredictionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UPredictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLocalPredictionOnly;
    
    UPredictionComponent(const FObjectInitializer& ObjectInitializer);

};

