#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameModeMatchmaking.h"
#include "GameModesMatchMakingDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UGameModesMatchMakingDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameModeMatchmaking> m_MapsPerMod;
    
    UGameModesMatchMakingDB();

};

