#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "GatherHUD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UGatherHUD : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sWaveProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sCurrWaveProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sEnemiesAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sStatuesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sStatuesEndGleamsEarned;
    
public:
    UGatherHUD();

};

