#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "HUDRevive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHUDRevive : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRevivePercentage;
    
public:
    UHUDRevive();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndRevive(bool _bSuccess);
    
};

