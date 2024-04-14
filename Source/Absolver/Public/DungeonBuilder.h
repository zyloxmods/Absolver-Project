#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenerationFeed.h"
#include "DungeonBuilder.generated.h"

class UDataTable;
class UDungeonTemplate;
class UProceduralLevelStreamingHelper;
class UWaveObjectiveConfig;

UCLASS(Blueprintable)
class ADungeonBuilder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ObjectiveCooldowns[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_LootData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_FragmentLootData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDungeonTemplate*> m_DungeonTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGenerationFeed m_Feed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UProceduralLevelStreamingHelper*> m_Helpers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaveObjectiveConfig* m_WaveObjConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaveObjectiveConfig* m_StatueWaveObjConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxDepth;
    
public:
    ADungeonBuilder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void PreviewDungeon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CleanPreview();
    
};

