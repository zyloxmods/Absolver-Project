#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"
#include "BindableMaterialWidget.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UBindableMaterialWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FloatParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat FloatValueDelegate;
    
public:
    UBindableMaterialWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterialInstance(UMaterialInstanceDynamic* _materialInstance);
    
};

