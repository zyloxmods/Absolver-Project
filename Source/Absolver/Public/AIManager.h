#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "AIManager.generated.h"

class AActor;
class ABaseCharacter;

UCLASS(Blueprintable)
class ABSOLVER_API UAIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCloseRangeDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMidRangeDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiMidRangeMaxAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTicketDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNoTicketScoreFactor[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTicketScoreFactor[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiLateralMoveProba[3];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpawningTimePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_ExtraAIsPerSituationPerNumberOfPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_AiClassToSpawn[2];
    
public:
    UAIManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnEndPlayAI(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
};

