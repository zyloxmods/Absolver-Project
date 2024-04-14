#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ScoreRecapWidget.h"
#include "Templates/SubclassOf.h"
#include "ScoreRecap1v1Widget.generated.h"

class UPanelWidget;
class UScoreLineRecap1v1Widget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UScoreRecap1v1Widget : public UScoreRecapWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScoreLineRecap1v1Widget> m_LineRecap1v1WidgetClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScoreLineRecap1v1Widget*> m_LineRecapWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iOwnerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iEnemyScore;
    
    UScoreRecap1v1Widget();

    UFUNCTION(BlueprintCallable)
    void BPF_CreateChildsFromRound(UPanelWidget* _parentWidget, const FMargin& _padding);
    
};

