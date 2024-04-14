#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "SCGameSession.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ASCGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ASCGameSession(const FObjectInitializer& ObjectInitializer);

};

