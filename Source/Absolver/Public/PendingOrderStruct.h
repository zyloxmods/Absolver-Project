#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "PendingOrderStruct.generated.h"

class UOrderComponent;

USTRUCT(BlueprintType)
struct FPendingOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType orderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderComponent* OrderComponent;
    
    ABSOLVER_API FPendingOrderStruct();
};

