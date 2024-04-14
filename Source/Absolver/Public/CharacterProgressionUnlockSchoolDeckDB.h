#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "EWeaponFamilies.h"
#include "CharacterProgressionUnlockSchoolDeckDB.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockSchoolDeckDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_NotificationIcon;
    
    UCharacterProgressionUnlockSchoolDeckDB();

};

