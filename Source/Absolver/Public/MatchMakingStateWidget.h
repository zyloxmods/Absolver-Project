#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECoopGameModeAnswerStatus.h"
#include "EGameModeTypes.h"
#include "HUDUserWidget.h"
#include "MatchMakingStateWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UMatchMakingStateWidget : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iGameModeSearchUserCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_i1v1UserCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_i3v3UserCount;
    
public:
    UMatchMakingStateWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGroupMemeberRemoved(const FUniqueNetIdRepl& _eNetId, AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGroupMemberNewAnswerStatus(const FUniqueNetIdRepl& _groupMemberUniqueId, AActor* _memberActor, ECoopGameModeAnswerStatus _eNewAnswer, EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDeleteGameModeCoop(EGameModeTypes _eGameModeType);
    
};

