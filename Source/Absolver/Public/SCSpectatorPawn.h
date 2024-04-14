#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "SCSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ASCSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedFactorModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFOVModifier;
    
    ASCSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

