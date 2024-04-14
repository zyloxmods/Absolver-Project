#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "School.h"
#include "AsyncTaskMentoringCreateSchool.generated.h"

class UAsyncTaskMentoringCreateSchool;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskMentoringCreateSchool : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskCreatSchoolCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCreatSchoolCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCreatSchoolCompleted OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCreatSchoolCompleted OnMenuTransition;
    
    UAsyncTaskMentoringCreateSchool();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringCreateSchool* BPF_MentoringCreateSchool(UObject* _menu, bool _bUpdateCurrentIfExisting, const FSchool& _school);
    
};

