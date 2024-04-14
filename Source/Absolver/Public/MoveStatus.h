#pragma once
#include "CoreMinimal.h"
#include "MoveStatus.generated.h"

USTRUCT(BlueprintType)
struct FMoveStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bExploration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNone;
    
    ABSOLVER_API FMoveStatus();
};

