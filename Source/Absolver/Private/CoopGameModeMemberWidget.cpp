#include "CoopGameModeMemberWidget.h"

UCoopGameModeMemberWidget::UCoopGameModeMemberWidget() {
    this->m_bIsForLeader = false;
    this->m_bOwner = false;
    this->m_NoNickNameDefaultText = FText::FromString(TEXT("Unknown Fighter"));
}



