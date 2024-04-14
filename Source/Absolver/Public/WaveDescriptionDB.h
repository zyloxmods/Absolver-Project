#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WaveElement.h"
#include "WaveDescriptionDB.generated.h"

class UArchetypeSituationDB;

UCLASS(Blueprintable)
class ABSOLVER_API UWaveDescriptionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveElement> m_WaveElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeSituationDB* m_ArchetypeSituation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iWaveLvl[3];
    
    UWaveDescriptionDB();

};

