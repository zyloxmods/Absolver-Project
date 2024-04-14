#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCUserWidget.h"
#include "DebugOnlineInfoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UDebugOnlineInfoWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_displayedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_displayedTextColor;
    
public:
    UDebugOnlineInfoWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTextColorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTextChanged();
    
};

