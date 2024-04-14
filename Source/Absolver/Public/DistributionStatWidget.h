#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDistributionStatType.h"
#include "DistributionStatWidget.generated.h"

class UPreviewData;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UDistributionStatWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewData* m_PreviewData;
    
public:
    UDistributionStatWidget();

    UFUNCTION(BlueprintCallable)
    int32 BPF_GetStatPoints(EDistributionStatType _eStat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPreviewData* BPF_GetPreviewData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshCharaStat(EDistributionStatType _eStat, int32 _iStatPoints);
    
};

