#pragma once
#include "CoreMinimal.h"
#include "HandledWeaponInfo.generated.h"

class AActor;
class UVisibleWeaponData;

USTRUCT(BlueprintType)
struct ABSOLVER_API FHandledWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVisibleWeaponData> m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_WeaponOwner;
    
    FHandledWeaponInfo();
};

