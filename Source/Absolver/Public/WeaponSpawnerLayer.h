#pragma once
#include "CoreMinimal.h"
#include "WeaponSpawnerLayer.generated.h"

class UVisibleWeaponData;

USTRUCT(BlueprintType)
struct FWeaponSpawnerLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisibleWeaponData* m_WeaponData;
    
    ABSOLVER_API FWeaponSpawnerLayer();
};

