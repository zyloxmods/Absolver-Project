#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "CharacterProgressionUnlockItemDB.generated.h"

class UBaseItemData;

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockItemDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_ItemToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEquipOnUnlock;
    
public:
    UCharacterProgressionUnlockItemDB();

};

