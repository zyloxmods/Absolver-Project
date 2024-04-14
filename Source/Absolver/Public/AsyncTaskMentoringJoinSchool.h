#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "School.h"
#include "AsyncTaskMentoringJoinSchool.generated.h"

class UAsyncTaskMentoringJoinSchool;
class UMenuWidget;

UCLASS(Blueprintable)
class UAsyncTaskMentoringJoinSchool : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskJoinSchoolCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskJoinSchoolCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskJoinSchoolCompleted OnFail;
    
    UAsyncTaskMentoringJoinSchool();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringJoinSchool* BPF_MentoringJoinSchool(UMenuWidget* _menu, FSchool _school);
    
};

