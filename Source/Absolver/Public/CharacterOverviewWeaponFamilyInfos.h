#pragma once
#include "CoreMinimal.h"
#include "EWeaponFamilies.h"
#include "CharacterOverviewWeaponFamilyInfos.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterOverviewWeaponFamilyInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_Icon;
    
    ABSOLVER_API FCharacterOverviewWeaponFamilyInfos();
};

