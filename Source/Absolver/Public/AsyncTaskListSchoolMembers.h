#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
#include "School.h"
#include "SchoolMember.h"
#include "AsyncTaskListSchoolMembers.generated.h"

class UAsyncTaskListSchoolMembers;
class UObject;
class USchoolMemberList;

UCLASS(Blueprintable)
class UAsyncTaskListSchoolMembers : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncTaskListSchoolMembersCompleted, const TArray<FSchoolMember>&, _members, bool, _bFinished, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskListSchoolMembersCompleted IsAlreadyLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskListSchoolMembersCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskListSchoolMembersCompleted OnFail;
    
    UAsyncTaskListSchoolMembers();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskListSchoolMembers* BPF_ListSchoolMembers(UObject* _menu, const FSchool& _school, USchoolMemberList* _list, int32 iCount);
    
};

