#pragma once
#include "CoreMinimal.h"
#include "WaitingEndGamePlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FWaitingEndGamePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> m_PlayersHexEncodedIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PlayersRessourcesForMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PlayersNumDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_PlayersNumKills;
    
    ABSOLVER_API FWaitingEndGamePlayerInfo();
};

