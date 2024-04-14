#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "AFKWarningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAFKWarningWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeAutoLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_TimeBeforeLeaveAsText;
    
public:
    UAFKWarningWidget();

};

