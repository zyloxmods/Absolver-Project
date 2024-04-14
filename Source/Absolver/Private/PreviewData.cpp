#include "PreviewData.h"

UPreviewData::UPreviewData() {
}

FSlateColor UPreviewData::BPF_GetColorForScaleComparison(float _fBase, float _fPreview) const {
    return FSlateColor{};
}

FSlateColor UPreviewData::BPF_GetColorForRatingComparison(float _fBase, float _fPreview) const {
    return FSlateColor{};
}

FSlateColor UPreviewData::BPF_GetColorForComparison(float _fBase, float _fPreview) const {
    return FSlateColor{};
}


