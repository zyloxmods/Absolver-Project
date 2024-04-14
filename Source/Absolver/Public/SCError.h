#pragma once
#include "CoreMinimal.h"
#include "ESCErrorType.h"
#include "SCError.generated.h"

USTRUCT(BlueprintType)
struct FSCError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCErrorType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Message;
    
    ABSOLVER_API FSCError();
};

