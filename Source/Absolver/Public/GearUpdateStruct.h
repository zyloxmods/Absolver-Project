#pragma once
#include "CoreMinimal.h"
#include "ECharacterSex.h"
#include "EquipmentStructForReplication.h"
#include "GearUpdateStruct.generated.h"

class UBaseWeaponData;

USTRUCT(BlueprintType)
struct FGearUpdateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentStructForReplication> m_Outfits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex m_eSex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSkinTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAbsolver;
    
    ABSOLVER_API FGearUpdateStruct();
};

