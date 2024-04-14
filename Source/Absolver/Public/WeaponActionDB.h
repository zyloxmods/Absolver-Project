#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DrawSheatheAnimByAction.h"
#include "DrawSheatheFreeMoveByAction.h"
#include "WeaponActionDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UWeaponActionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSheatheAnimByAction m_LockMoveAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSheatheFreeMoveByAction m_FreeMoveAnims;
    
    UWeaponActionDB();

};

