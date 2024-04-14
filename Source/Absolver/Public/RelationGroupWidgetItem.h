#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "RelationGroupWidgetItem.generated.h"

class UTargetableWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API URelationGroupWidgetItem : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTargetableWidget* m_TargetableWidgetsBox;
    
public:
    URelationGroupWidgetItem();

protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetAndBuildNativeWidget(UTargetableWidget* _TargetableWidgetsBox);
    
};

