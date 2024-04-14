#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EWeaponFamilies.h"
#include "DummiesDB.generated.h"

class UBaseWeaponData;

UCLASS(Blueprintable)
class ABSOLVER_API UDummiesDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_DummyWeapons[3];
    
    UDummiesDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseWeaponData* BPF_GetDummyForWeaponFamily(EWeaponFamilies _eFamily);
    
};

