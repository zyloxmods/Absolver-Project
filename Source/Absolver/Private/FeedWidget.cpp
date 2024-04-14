#include "FeedWidget.h"
#include "Templates/SubclassOf.h"

UFeedWidget::UFeedWidget() {
    this->m_bNotifyPawnChanged = true;
    this->m_bNewestIsLowest = false;
    this->m_uiFeedEntryTotalNumber = 10;
    this->m_uiLastEntryNumber = 0;
    this->m_ScrollBox = NULL;
    this->m_VerticalBox = NULL;
    this->m_BackgroundImage = NULL;
    this->m_fFeedEntryLifespan = 10.00f;
    this->m_fEntryLifespanStartFadeOut = 0.10f;
    this->m_fFeedEntriesSpacing = 5.00f;
    this->m_fEntryElementsLeftRightPadding = 0.50f;
    this->m_FeedEntryAlignement = HAlign_Right;
    this->m_bAlternateEntryAlignment = false;
    this->m_ImageElements[0] = NULL;
    this->m_ImageElements[1] = NULL;
    this->m_ImageElements[2] = NULL;
    this->m_ImageElements[3] = NULL;
    this->m_ImageElements[4] = NULL;
    this->m_ImageElements[5] = NULL;
    this->m_ImageElements[6] = NULL;
    this->m_ImageElements[7] = NULL;
    this->m_ImageElements[8] = NULL;
    this->m_ImageElements[9] = NULL;
    this->m_ImageElements[10] = NULL;
    this->m_ImageElements[11] = NULL;
    this->m_ImageElements[12] = NULL;
    this->m_ImageElements[13] = NULL;
    this->m_ImageElements[14] = NULL;
    this->m_ImageElements[15] = NULL;
    this->m_ImageElements[16] = NULL;
    this->m_ImageElements[17] = NULL;
    this->m_ImageElements[18] = NULL;
    this->m_ImageElements[19] = NULL;
    this->m_ImageElements[20] = NULL;
    this->m_ImageElements[21] = NULL;
    this->m_ImageElements[22] = NULL;
    this->m_ImageElements[23] = NULL;
    this->m_ImageElements[24] = NULL;
    this->m_ImageElements[25] = NULL;
    this->m_ImageElements[26] = NULL;
    this->m_ImageElements[27] = NULL;
    this->m_ImageElements[28] = NULL;
    this->m_ImageElements[29] = NULL;
    this->m_NoNickNameDefaultText = FText::FromString(TEXT("Unknown Fighter"));
    this->m_FadeOutAnimCurve = NULL;
    this->m_fAppearanceTime = 10.00f;
    this->m_fFadeOutTime = 2.00f;
    this->m_bUseFadeOut = true;
    this->m_TextBlockScrollClass = NULL;
    this->m_WapperPaddingTopBottom = 5.00f;
    this->m_WrapperEntryPaddingLeftRight = 5.00f;
}

void UFeedWidget::BPF_SetAndBuildNativeWidgets(UVerticalBox* _verticalBox, UScrollBox* _ScrollBox, UImage* _backgroundImg) {
}

UWidget* UFeedWidget::BPF_CreateWidget(TSubclassOf<UWidget> _subClass) {
    return NULL;
}

UWidget* UFeedWidget::BPF_CreateCustomWidgetEntry_Implementation(EFeedEntryElements _eFeedEntryElement) {
    return NULL;
}

void UFeedWidget::BPF_ConfigureTextBoxScroll_Implementation(UTextBlockScroll* _textBlockScroll, USizeBox* _sizeBox, const FText& _text, const FSlateFontInfo& _fontInfo, const FSlateColor& _slateColor) {
}

void UFeedWidget::BPF_AddFeedEntry(FFeedEntryData& _FeedEntryData) {
}



