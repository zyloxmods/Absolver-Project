#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "SchoolMember.h"
#include "SchoolMemberButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USchoolMemberButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    USchoolMemberButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetErrorButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLoadingButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsErrorButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchoolMember BPF_GetSchoolMember();
    
};

