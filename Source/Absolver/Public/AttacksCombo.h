#pragma once
#include "CoreMinimal.h"
#include "AttackComboDB.h"
#include "AttacksCombo.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAttacksCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FAttackComboDB m_ComboStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsBackLeftXls;
    
    FAttacksCombo();
};

