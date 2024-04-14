#include "TriangleStatsWidget.h"

UTriangleStatsWidget::UTriangleStatsWidget() {
    this->DownLeftStat = 1.00f;
    this->UpStat = 1.00f;
    this->DownRightStat = 1.00f;
    this->m_fTriangleLineWidth = 2.00f;
    this->m_fCrossLineWidth = 1.00f;
}

void UTriangleStatsWidget::BPF_SetUpValue(float _fValue) {
}

void UTriangleStatsWidget::BPF_SetDownRightValue(float _fValue) {
}

void UTriangleStatsWidget::BPF_SetDownLeftValue(float _fValue) {
}


