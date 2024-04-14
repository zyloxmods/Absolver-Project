#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MarkedArchetype.h"
#include "GatherArchetypeDB.generated.h"

class UArchetypeAsset;

UCLASS(Blueprintable)
class ABSOLVER_API UGatherArchetypeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArchetypeAsset*> m_Archetypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkedArchetype> m_MarkedArchetypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkedArchetype> m_MarkedSideArchetypes;
    
    UGatherArchetypeDB();

};

