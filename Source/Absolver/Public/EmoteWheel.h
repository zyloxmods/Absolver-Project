#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EmoteWheel.generated.h"

class AActor;
class UCanvasPanel;
class UEmoteWheelItem;
class UProgressBar;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEmoteWheel : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionForEdition, UEmoteWheelItem*, _emoteWheemItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionForEdition OnSelectionForEdition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowEmptySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOptimalEmoteNumberPerHalfWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiCustomEmoteExtraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_TopWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_FixedEmoteTabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_CustomEmotePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_EmoteDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_RequestNotifTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_RequestTabTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_RequestTimeOutProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_TooltipWidgetSwitcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEmoteWheelItem> m_EmoteWheelItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCircleRadiusRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_RequestNotifTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NoNickNameDefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSelectionFadeOutDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiPixelRadiusTresholdForMouseSelection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiPixelRadiusExteriorTresholdForMouseSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vEmoteWheelItemSize;
    
public:
    UEmoteWheel();

private:
    UFUNCTION(BlueprintCallable)
    void OnEquippedEmoteChangedCallback(const FName& _emoteName, const uint8 _uiEmoteIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToNextTab();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetAndBuildNativeWidgets(UWidgetSwitcher* _TopWidgetSwitcher, UWidgetSwitcher* _FixedEmoteTabSwitcher, UCanvasPanel* _customEmotePanel, UTextBlock* _emoteDescriptionTextBlock, UTextBlock* _requestNotifTextBlock, UTextBlock* _requestTabTextBlock, UProgressBar* _requestTimeOut, UWidgetSwitcher* _tooltipWidgetSwitcher, const FVector2D& _vWheelSize);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D BPF_GetWheelCenter() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PlayFadeOutAnimation(bool _bRequestAccepted, bool _bSnapToEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PlayFadeInAnimation();
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
   // void BPE_PlayAnimation(TEnumAsByte<EUMGSequencePlayMode::Type> _InPlayMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OpenSchoolMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTargetChanged(AActor* _prevTgt, AActor* _newTgt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOpenClosed(bool _bOpen);
    
};

