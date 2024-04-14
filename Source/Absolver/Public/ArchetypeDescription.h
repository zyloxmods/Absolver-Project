#pragma once
#include "CoreMinimal.h"
#include "ArchetypeDescription.generated.h"

class UArchetypeAsset;

USTRUCT(BlueprintType)
struct FArchetypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeAsset* m_Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iIndexOfEquipmentSelection;
    
    ABSOLVER_API FArchetypeDescription();
};

