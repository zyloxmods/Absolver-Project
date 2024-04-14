#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EditorPreviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEditorPreviewWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UEditorPreviewWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSynchronizeProperties();
    
};

