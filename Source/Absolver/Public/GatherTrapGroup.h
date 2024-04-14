#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GatherTrapGroup.generated.h"

class AGatherTrap;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherTrapGroup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGatherTrap*> m_Traps;
    
public:
    AGatherTrapGroup(const FObjectInitializer& ObjectInitializer);

};

