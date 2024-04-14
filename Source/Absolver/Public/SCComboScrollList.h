#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "SCComboScrollList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USCComboScrollList : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSelected, int32, SelectedIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSelected OnItemSelected;
    
    USCComboScrollList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitFromStrings(const TArray<FString>& _list, int32 _iSelectedItem);
    
};

