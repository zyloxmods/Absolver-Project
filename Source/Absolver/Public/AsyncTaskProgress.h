#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskProgress.generated.h"

class UAsyncTaskProgress;
class UCurveFloat;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskProgress : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAsyncTaskProgressUpdate, float, _progress, float, _progressDelta, bool, _bInterrupted, UAsyncTaskProgress*, _task);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskProgressUpdate OnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskProgressUpdate OnTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskProgressUpdate OnFinised;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
public:
    UAsyncTaskProgress();

    UFUNCTION(BlueprintCallable)
    void BPF_Stop(bool _bEnd);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskProgress* BPF_StartProgress(UObject* _menu, float _fDuration, UCurveFloat* _curve);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Resume();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Restart();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Pause();
    
};

