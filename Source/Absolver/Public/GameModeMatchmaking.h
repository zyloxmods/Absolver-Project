#pragma once
#include "CoreMinimal.h"
#include "EGameModeTypes.h"
#include "Templates/SubclassOf.h"
#include "GameModeMatchmaking.generated.h"

class AGameMode;

USTRUCT(BlueprintType)
struct FGameModeMatchmaking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeTypes m_eGameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Maps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGameMode>> m_GameModes;
    
    ABSOLVER_API FGameModeMatchmaking();
};

