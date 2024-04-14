#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAttributeScales.h"
#include "EDistributionStatType.h"
#include "ESpecialAbilities.h"
#include "FightingStyleDB.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API UFightingStyleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeScales m_AttributeScales[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialAbilities m_eSpecialAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_SpecialAbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_SpecialAbilityDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_StyleSmallIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_StyleBigIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_StyleMentoringIcon;
    
    UFightingStyleDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttributeScales BPF_GetAttributeScale(const EDistributionStatType& _eAttribute) const;
    
};

