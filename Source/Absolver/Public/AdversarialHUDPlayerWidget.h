#pragma once
#include "CoreMinimal.h"
#include "EGameModePlayerAnswers.h"
#include "SCUserWidget.h"
#include "AdversarialHUDPlayerWidget.generated.h"

class AAdversarialPlayerState;
class AFightingCharacter;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAdversarialHUDPlayerWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCurrentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCurrentPlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iKillsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bExists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDisappearDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGameModePlayerAnswers m_eLastAnswer;
    
public:
    UAdversarialHUDPlayerWidget();

    UFUNCTION(BlueprintCallable)
    bool BPF_IsCurrentPlayerTeam();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsCurrentPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAdversarialPlayerState* BPF_GetPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetCharacter();
    
};

