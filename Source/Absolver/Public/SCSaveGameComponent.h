#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCSaveGameComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USCSaveGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnUpdatedFromSave OnUpdatedFromSave;
    
    USCSaveGameComponent(const FObjectInitializer& ObjectInitializer);

};

