#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskPlayAnimation.generated.h"

class UAsyncTaskPlayAnimation;
class UObject;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UAsyncTaskPlayAnimation : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskPlayTransitionAnimation);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskPlayTransitionAnimation OnFinished;
    
    UAsyncTaskPlayAnimation();

    UFUNCTION(BlueprintCallable)
    void OnTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskPlayAnimation* BPF_PlayTransitionAnimationAsync(UObject* _menu, UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    
};

