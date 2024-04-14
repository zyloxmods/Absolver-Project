#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "RecentPlayerInfos.h"
#include "RecentPlayerButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API URecentPlayerButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    URecentPlayerButton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetRecentPlayerInfos(FRecentPlayerInfos& _OutInfos);
    
};

