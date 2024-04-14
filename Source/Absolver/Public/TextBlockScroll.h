#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "TextBlockScroll.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class URetainerBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UTextBlockScroll : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRestartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPixelPerSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMargin;
    
    UTextBlockScroll();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_SetOpacity(const float& _fOpacity);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ScrollTextIfNeeded(UTextBlock* _textBlock, URetainerBox* _retainerBox);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestartScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnScrollingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnScrollingReset(bool _bScrollingNeeded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnScrollingEnded();
    
};

