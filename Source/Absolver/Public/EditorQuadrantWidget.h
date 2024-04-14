#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ENavigationDirections.h"
#include "EditorQuadrantWidget.generated.h"

class UEditorCard;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEditorQuadrantWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEditorCard*> m_RegCardsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditorCard* m_AltCard;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavigationDirections m_eAltAttackDirection;
    
public:
    UEditorQuadrantWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_ReorientWidget(UWidget* _widgetReoriented);
    
};

