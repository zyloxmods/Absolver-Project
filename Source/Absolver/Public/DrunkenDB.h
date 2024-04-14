#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponAttackNameArray.h"
#include "DrunkenDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UDrunkenDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAttackNameArray m_DrunkenAttackNames[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fUpAttackSelectionAngleWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDownAttackSelectionAngleWidth;
    
    UDrunkenDB();

};

