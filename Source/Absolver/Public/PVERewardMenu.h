#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "PlayerEndGameInfo.h"
#include "PVERewardMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UPVERewardMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UPVERewardMenu();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetGameTime(int32& _iOutMin, int32& _iOutSec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerEndGameInfo> BPF_GetEndGamePlayerInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentDepth() const;
    
};

