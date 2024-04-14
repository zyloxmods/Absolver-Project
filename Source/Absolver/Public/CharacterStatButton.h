#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EDistributionStatType.h"
#include "EStatsAppliedMode.h"
#include "IntStatBinding.h"
#include "CharacterStatButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCharacterStatButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDistributionStatType m_eStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntStatBinding m_PreviewStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntStatBinding m_CurrentStat;
    
    UCharacterStatButton();

    UFUNCTION(BlueprintCallable)
    void OnStatsChanged(EStatsAppliedMode _statsAppliedMode);
    
};

