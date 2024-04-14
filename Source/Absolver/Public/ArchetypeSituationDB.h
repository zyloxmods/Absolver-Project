#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ArchetypeSituationDescription.h"
#include "ArchetypeSituationDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UArchetypeSituationDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;
    
    UArchetypeSituationDB();

};

