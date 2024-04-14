#pragma once
#include "CoreMinimal.h"
#include "OneVersusOneRoundInfo.h"
#include "SCUserWidget.h"
#include "ScoreLineRecap1v1Widget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UScoreLineRecap1v1Widget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneVersusOneRoundInfo m_RoundInfo;
    
public:
    UScoreLineRecap1v1Widget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RoundInfoSet();
    
};

