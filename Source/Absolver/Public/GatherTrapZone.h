#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETrapZoneSpawnMode.h"
#include "GatherTrapZone.generated.h"

class AGatherTrapGroup;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherTrapZone : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapZoneSpawnMode m_eSpawnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGatherTrapGroup*> m_trapGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EmptyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EmptyGroupFactor;
    
public:
    AGatherTrapZone(const FObjectInitializer& ObjectInitializer);

};

