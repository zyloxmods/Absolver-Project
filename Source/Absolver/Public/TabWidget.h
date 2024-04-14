#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TabWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UTabWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiEnumValue;
    
public:
    UTabWidget();

    UFUNCTION(BlueprintCallable)
    uint8 BPF_GetEnumValue();
    
};

