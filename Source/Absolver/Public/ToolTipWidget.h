#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "ToolTipWidget.generated.h"

class UButtonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UToolTipWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UButtonUserWidget> m_Button;
    
    UToolTipWidget();

};

