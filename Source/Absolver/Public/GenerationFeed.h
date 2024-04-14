#pragma once
#include "CoreMinimal.h"
#include "GenerationFeedRoom.h"
#include "GenerationFeed.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FGenerationFeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_DungeonTemplateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iMaxDepthIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGenerationFeedRoom> m_Rooms;
    
    FGenerationFeed();
};

