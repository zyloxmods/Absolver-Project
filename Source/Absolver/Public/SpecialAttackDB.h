#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialAttackStruct.h"
#include "SpecialAttackDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USpecialAttackDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialAttackStruct> m_SpecialAttacks;
    
    USpecialAttackDB();

};

