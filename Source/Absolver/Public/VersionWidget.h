#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "VersionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UVersionWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_displayedText;
    
public:
    UVersionWidget();

};

