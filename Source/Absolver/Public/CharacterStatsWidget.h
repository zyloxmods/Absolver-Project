#pragma once
#include "CoreMinimal.h"
#include "CharacterStatsBindings.h"
#include "CombatDeckDetails.h"
#include "EStatsAppliedMode.h"
#include "SCUserWidget.h"
#include "CharacterStatsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCharacterStatsWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CurrentWeaponCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewWeaponCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CurrentHandCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewHandCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsBindings m_CurrentCharacterStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsBindings m_PreviewCharacterStats;
    
    UCharacterStatsWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_UpdateStats(EStatsAppliedMode _eStatsAppliedMode);
    
};

