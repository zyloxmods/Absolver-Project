#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "ESchoolItemType.h"
#include "CharacterProgressionUnlockSchoolItemDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockSchoolItemDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESchoolItemType m_eItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UCharacterProgressionUnlockSchoolItemDB();

};

