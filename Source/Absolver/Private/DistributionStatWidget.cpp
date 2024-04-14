#include "DistributionStatWidget.h"

UDistributionStatWidget::UDistributionStatWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_PreviewData = NULL;
}

int32 UDistributionStatWidget::BPF_GetStatPoints(EDistributionStatType _eStat) {
    return 0;
}

UPreviewData* UDistributionStatWidget::BPF_GetPreviewData() const {
    return NULL;
}



