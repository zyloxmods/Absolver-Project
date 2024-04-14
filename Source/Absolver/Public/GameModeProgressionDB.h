#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameModeLootStruct.h"
#include "GameModeProgressionDB.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABSOLVER_API UGameModeProgressionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameModeLootStruct> m_Loots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iXPRequiredPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_EquipmentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_WeaponDataTable;
    
    UGameModeProgressionDB();

};

