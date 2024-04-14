#pragma once
#include "CoreMinimal.h"
#include "EHUDUserWidgetVisibility.h"
#include "EMenuEnum.h"
#include "SCUserWidget.h"
#include "HUDUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UHUDUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleWithMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMenuEnum> m_HideWithMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSearchMenusInStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleInTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleInTrainingOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleWithEmoteWheel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDUserWidgetVisibility m_VisibleStates[46];
    
    UHUDUserWidget();

};

