#pragma once
#include "CoreMinimal.h"
#include "WorldSave.generated.h"

USTRUCT(BlueprintType)
struct FWorldSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_LevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_WorldStateSaved;
    
    ABSOLVER_API FWorldSave();
};

