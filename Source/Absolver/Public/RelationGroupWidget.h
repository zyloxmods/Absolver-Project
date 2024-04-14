#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Styling/SlateBrush.h"
#include "ERelationshipTypes.h"
#include "SCUserWidget.h"
#include "RelationGroupWidget.generated.h"

class AActor;
class UObject;
class URelationGroupWidgetItem;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API URelationGroupWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_WidgetTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush m_TitleImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_TitleImageLinearColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERelationshipTypes m_eRelationshipType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_WidgetTitles[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_TitleImageResources[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_TitleImageColors[6];
    
public:
    URelationGroupWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayerReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetAndBuildNativeWidget(TArray<URelationGroupWidgetItem*> _memberHUDContainers);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERelationshipTypes BPF_GetRelationshipType() const;
    
};

