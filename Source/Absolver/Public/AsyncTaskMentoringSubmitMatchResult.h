#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MenuAsyncActionBase.h"
#include "AsyncTaskMentoringSubmitMatchResult.generated.h"

class UAsyncTaskMentoringSubmitMatchResult;
class UObject;

UCLASS(Blueprintable)
class UAsyncTaskMentoringSubmitMatchResult : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskCompleted, const FText&, _error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCompleted OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTaskCompleted OnFail;
    
    UAsyncTaskMentoringSubmitMatchResult();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMentoringSubmitMatchResult* BPF_MentoringSubmitMatchResult(UObject* _menu, FDateTime _matchID, bool _bVictory);
    
};

