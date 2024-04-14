#pragma once
#include "CoreMinimal.h"
#include "InFightPlayersInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ABSOLVER_API FInFightPlayersInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_EnemyActor;
    
    FInFightPlayersInfo();
};

