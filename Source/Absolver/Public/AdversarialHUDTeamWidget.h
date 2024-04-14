#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "AdversarialHUDTeamWidget.generated.h"

class AAdversarialGameState;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAdversarialHUDTeamWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCurrentPlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_fScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bExists;
    
public:
    UAdversarialHUDTeamWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAdversarialGameState* BPF_GetGameState();
    
};

