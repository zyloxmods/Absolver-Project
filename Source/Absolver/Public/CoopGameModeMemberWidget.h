#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "CoopGameModeMemberWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCoopGameModeMemberWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AnswerDescriptiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_CoopMemberNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsForLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOwner;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AnswerNotifTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NoNickNameDefaultText;
    
public:
    UCoopGameModeMemberWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayerSet();
    
};

