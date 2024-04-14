#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERoomAnchor.h"
#include "AnchorActor.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AAnchorActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomAnchor m_eAnchor;
    
public:
    AAnchorActor(const FObjectInitializer& ObjectInitializer);

};

