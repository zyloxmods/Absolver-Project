#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateColor.h"
#include "AsyncTextureStruct.h"
#include "EStatsWeaponComputingMethod.h"
#include "OldCharacterStatsBindings.generated.h"

class UPreviewData;

UCLASS(Blueprintable)
class ABSOLVER_API UOldCharacterStatsBindings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewData* m_PreviewDataDB;
    
public:
    UOldCharacterStatsBindings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetWeightRatioCompareColor(EStatsWeaponComputingMethod _eStatsWeaponComputingMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsWeaponComputingMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetWeaponWeightRatioCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetWeaponWeightRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetTotalProtectionCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetTotalProtection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetPlayerStaminaCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetPlayerStamina();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetPlayerShardsCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetPlayerShards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetPlayerLevelCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetPlayerLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetPlayerHealthCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetPlayerHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetNormalWeightRatioCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetNormalWeightRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetMaxEquipLoadCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetMaxEquipLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetFightingStyleName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAsyncTextureStruct BPF_GetFightingStyleMiniIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetCutProtectionCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetCutProtection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetBluntProtectionCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetBluntProtection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetBareHandWeightRatioCompareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetBareHandWeightRatio();
    
};

