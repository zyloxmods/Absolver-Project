#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIStaminaManagementDataAsset.generated.h"

UCLASS(Blueprintable)
class UAIStaminaManagementDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaminaMinToDiscardDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaminaMinToDiscardGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaminaMinToDiscardDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaminaMinToDiscardAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaminaToEnterSafeStateRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaminaToExitSafeStateRatio;
    
    UAIStaminaManagementDataAsset();

};

