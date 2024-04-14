#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "RefreshAttackNbTintStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FRefreshAttackNbTintStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNewAttacksInQuadrant;
    
    FRefreshAttackNbTintStruct();
};

