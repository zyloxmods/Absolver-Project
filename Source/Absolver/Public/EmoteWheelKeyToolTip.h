#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EmoteWheelKeyToolTip.generated.h"

class UAsyncImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEmoteWheelKeyToolTip : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_BeforeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_KeyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AfterText;
    
    UEmoteWheelKeyToolTip();

    UFUNCTION(BlueprintCallable)
    void BPF_SetWidgetContent(UTextBlock* _beforeTextBlock, UAsyncImage* _asyncImage, UTextBlock* _afterTextBlock);
    
};

