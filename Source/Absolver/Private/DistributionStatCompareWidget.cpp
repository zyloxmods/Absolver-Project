#include "DistributionStatCompareWidget.h"

UDistributionStatCompareWidget::UDistributionStatCompareWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_PreviewData = NULL;
}

UStatsComponent* UDistributionStatCompareWidget::BPF_GetStatsComponent() {
    return NULL;
}

UPreviewData* UDistributionStatCompareWidget::BPF_GetPreviewData() const {
    return NULL;
}


