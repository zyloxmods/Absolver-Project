#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "ECoopGameModeAnswerStatus.h"
#include "ECoopUserDisplayType.h"
#include "EGameModeTypes.h"
#include "CoopPlayerButton.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCoopPlayerButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoopGameModeAnswerStatus m_eGameModeAnswer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeTypes m_eGameModeType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoopUserDisplayType m_eCoopUserDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCoopIndex;
    
public:
    UCoopPlayerButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetGameModeType(EGameModeTypes _eGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsConnecting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetActor();
    
};

