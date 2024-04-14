#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "MessageNotification.generated.h"

class UMessageNotification;

UCLASS(Blueprintable)
class UMessageNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Message;
    
    UMessageNotification();

    UFUNCTION(BlueprintCallable)
    UMessageNotification* BPF_Init(FText _message);
    
};

