#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "EFeedEntryElements.h"
#include "EFeedEntryTypes.h"
#include "FeedEntryData.h"
#include "FeedEntryElementsArray.h"
#include "HUDUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FeedWidget.generated.h"

class UCurveFloat;
class UImage;
class UObject;
class UScrollBox;
class USizeBox;
class USocialComponent;
class UTextBlockScroll;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UFeedWidget : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNewestIsLowest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiFeedEntryTotalNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiLastEntryNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_VerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USocialComponent> m_SocialComponent;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeedEntryElementsArray m_FeedEntryTypes[30];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFeedEntryLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEntryLifespanStartFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFeedEntriesSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEntryElementsLeftRightPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> m_FeedEntryAlignement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlternateEntryAlignment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TextElements[32];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_TextColors[32];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_RelationshipTextColors[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_ImageElements[30];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NoNickNameDefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo m_TextBlockFontInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vPictoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FadeOutAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTextBlockScroll> m_TextBlockScrollClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush m_WrapperBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WapperPaddingTopBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WrapperEntryPaddingLeftRight;
    
public:
    UFeedWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetAndBuildNativeWidgets(UVerticalBox* _verticalBox, UScrollBox* _ScrollBox, UImage* _backgroundImg);
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* BPF_CreateWidget(TSubclassOf<UWidget> _subClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* BPF_CreateCustomWidgetEntry(EFeedEntryElements _eFeedEntryElement);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPF_ConfigureTextBoxScroll(UTextBlockScroll* _textBlockScroll, USizeBox* _sizeBox, const FText& _text, const FSlateFontInfo& _fontInfo, const FSlateColor& _slateColor);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_AddFeedEntry(FFeedEntryData& _FeedEntryData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFeedEntryWasAdded(EFeedEntryTypes _eFeedEntryType);
    
};

