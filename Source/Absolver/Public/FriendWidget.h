#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "FriendWidget.generated.h"

class USCFriend;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UFriendWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UFriendWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCFriend* BPF_GetFriend();
    
};

