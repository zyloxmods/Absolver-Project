#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "LevelUpNotification.generated.h"

class ULevelUpNotification;

UCLASS(Blueprintable)
class ULevelUpNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevel;
    
    ULevelUpNotification();

    UFUNCTION(BlueprintCallable)
    ULevelUpNotification* BPF_Init(int32 _ilevel);
    
};

