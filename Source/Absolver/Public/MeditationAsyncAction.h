#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnMeditationDelegateDelegate.h"
#include "MeditationAsyncAction.generated.h"

class AFightingPlayerController;
class UMeditationAsyncAction;

UCLASS(Blueprintable)
class UMeditationAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeditationDelegate OnFinished;
    
    UMeditationAsyncAction();

    UFUNCTION(BlueprintCallable)
    static UMeditationAsyncAction* ExitMeditation(AFightingPlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    static UMeditationAsyncAction* EnterMeditation(AFightingPlayerController* _controller);
    
};

