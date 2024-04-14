#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskMentoringLeaveSchool.generated.h"

class UAsyncTaskMentoringLeaveSchool;
class UMenuWidget;

UCLASS(Blueprintable)
class UAsyncTaskMentoringLeaveSchool : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskLeaveSchoolCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskLeaveSchoolCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskLeaveSchoolCompleted OnFail;
    
    UAsyncTaskMentoringLeaveSchool();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringLeaveSchool* BPF_MentoringLeaveSchool(UMenuWidget* _menu);
    
};

