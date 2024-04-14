#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateColor.h"
#include "PreviewData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UPreviewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_RatingBonusTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_RatingPenaltyTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_RatingNormalTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_PreviewBonusTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_PreviewPenaltyTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_NormalTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_ScaleTint;
    
    UPreviewData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetColorForScaleComparison(float _fBase, float _fPreview) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetColorForRatingComparison(float _fBase, float _fPreview) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetColorForComparison(float _fBase, float _fPreview) const;
    
};

