#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGearRarity.h"
#include "PictoData.h"
#include "SequenceCheckPointData.h"
#include "LootBoxOpeningSequenceDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ULootBoxOpeningSequenceDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGearRarity, FPictoData> m_pictosData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSequenceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSequenceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSequenceCheckPointData> m_sequenceCheckPointsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopPlayBackStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopPlayBackEndPosition;
    
    ULootBoxOpeningSequenceDB();

};

