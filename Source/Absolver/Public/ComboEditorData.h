#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateColor.h"
#include "EAvoidType.h"
#include "EParrySide.h"
#include "ComboEditorData.generated.h"

class UComboWidgetData;

UCLASS(Blueprintable)
class ABSOLVER_API UComboEditorData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboWidgetData* m_ComboWidgetData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AvoidTexts[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ParryTexts[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_ErrorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_EmptyTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_FocusedTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_NormalTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_LosangeSelectedTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDamageVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxRangeVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinSpeedVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxSpeedVal;
    
    UComboEditorData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetParryText(EParrySide _eParryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAvoidText(EAvoidType _eAvoidType) const;
    
};

