#pragma once
#include "CoreMinimal.h"
#include "AttackComboRealNamesDB.generated.h"

USTRUCT(BlueprintType)
struct FAttackComboRealNamesDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsBackLeftXls;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AlternativeAttacksXls[4];
    
    ABSOLVER_API FAttackComboRealNamesDB();
};

