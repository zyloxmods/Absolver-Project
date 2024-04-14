#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "School.h"
#include "SchoolMentoringInfos.h"
#include "AsyncTaskMentoringGetSchoolInfos.generated.h"

class UAsyncTaskMentoringGetSchoolInfos;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskMentoringGetSchoolInfos : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncTaskGetSchoolInfosCompleted, const FSchoolMentoringInfos&, _infos, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetSchoolInfosCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskGetSchoolInfosCompleted OnFail;
    
    UAsyncTaskMentoringGetSchoolInfos();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetSchoolInfos* BPF_MentoringGetSchoolInfosFromID(UObject* _menu, const FString& _schoolReadableID, int32 _iInfosBitmask, int32 _iSeasonID);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringGetSchoolInfos* BPF_MentoringGetSchoolInfos(UObject* _menu, const FSchool& _school, int32 _iInfosBitmask, int32 _iSeasonID);
    
};

