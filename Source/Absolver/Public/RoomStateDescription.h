#pragma once
#include "CoreMinimal.h"
#include "AISpawnedDescription.h"
#include "GatherBankDescription.h"
#include "GatherChestDescription.h"
#include "GatherTrapDescription.h"
#include "RoomStateDescription.generated.h"

USTRUCT(BlueprintType)
struct FRoomStateDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISpawnedDescription> m_AiSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGatherBankDescription> m_Banks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGatherTrapDescription> m_Traps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGatherChestDescription> m_Chests;
    
    ABSOLVER_API FRoomStateDescription();
};

