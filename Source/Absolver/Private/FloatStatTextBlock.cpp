#include "FloatStatTextBlock.h"

UFloatStatTextBlock::UFloatStatTextBlock() {
    this->Stat = 0.00f;
    this->CompareStat = 0.00f;
    this->m_ColorComparisonProfile = NULL;
    this->m_bHightIsBetter = true;
    this->m_EmptyText = FText::FromString(TEXT("-"));
    this->m_fMultiply = 1.00f;
    this->m_bIsAttributeScale = false;
    this->m_bUseGrouping = true;
    this->m_iMinimumIntegralDigits = 1;
    this->m_iMaximumIntegralDigits = 324;
    this->m_iMinimumFractionalDigits = 0;
    this->m_iMaximumFractionalDigits = 1;
    this->m_bCanBeNegative = false;
}


