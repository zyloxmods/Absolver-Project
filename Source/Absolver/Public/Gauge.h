#pragma once
#include "CoreMinimal.h"
#include "GetPercentageDelegateDelegate.h"
#include "HUDUserWidget.h"
#include "Gauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UGauge : public UHUDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPercentage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPercentageDelegate m_fPercentageDelegate;
    
public:
    UGauge();

};

