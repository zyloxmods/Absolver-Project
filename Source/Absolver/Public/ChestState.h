#pragma once
#include "CoreMinimal.h"
#include "ChestState.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FChestState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerState> m_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLooted;
    
    ABSOLVER_API FChestState();
};

