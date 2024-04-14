#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TicketManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UTicketManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScoreFactors[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NoTicketScoreFactors[3];
    
public:
    UTicketManager();

};

