#pragma once
#include "CoreMinimal.h"
#include "EBlockerSate.h"
#include "DoorStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FDoorStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBlockerSate m_eState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bPlaySound;
    
    ABSOLVER_API FDoorStateInfo();
};

