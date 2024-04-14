#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttackComboDB.h"
#include "AttacksComboDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAttacksComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackComboDB m_Struct;
    
    UAttacksComboDB();

};

