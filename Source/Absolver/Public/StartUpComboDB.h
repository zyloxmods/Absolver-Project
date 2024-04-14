#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CombatStyleComboDB.h"
#include "StartUpComboDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UStartUpComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatStyleComboDB> m_CombatStyleComboDBs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboSlotNames;
    
    UStartUpComboDB();

};

