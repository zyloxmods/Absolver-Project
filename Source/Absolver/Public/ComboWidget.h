#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EQuadrantTypes.h"
#include "Templates/SubclassOf.h"
#include "ComboWidget.generated.h"

class UComboMiniCard;
class UComboWidgetData;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboMiniCard* m_AltMiniCard;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboWidgetData* m_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_ImagesRegularAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UComboMiniCard> m_MinicardsClass;
    
public:
    UComboWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_InitAltCard(UComboMiniCard* _card);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ActualiseMinicards();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ActualiseEndQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ActualiseCardsStyle();
    
};

