#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructSpawn.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimStructSpawn : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPlayRate;
    
    FAnimStructSpawn();
};

