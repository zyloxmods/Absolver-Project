#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EStatsAppliedMode.h"
#include "FightingStyleButton.generated.h"

class UFightingStyleDB;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UFightingStyleButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFightingStyleProgressionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreMentorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFightingStyleDB* m_FightingStyleDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iFightingStyleID;
    
public:
    UFightingStyleButton();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStatsUpdated(EStatsAppliedMode _eMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetIgnoreMentorStyle(bool _bIgnoreMentorStyle);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFightingStyleProgressionIndex(int32 _iProgressionIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetFightingStyleID(int32 _iID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentFS();
    
};

