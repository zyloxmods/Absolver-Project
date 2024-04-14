#pragma once
#include "CoreMinimal.h"
#include "AttackComboDB.generated.h"

USTRUCT(BlueprintType)
struct FAttackComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsBackLeftXls;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_AlternativeAttacksXls[4];
    
    ABSOLVER_API FAttackComboDB();
};

