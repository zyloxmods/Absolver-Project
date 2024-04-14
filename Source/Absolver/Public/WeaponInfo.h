#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.h"
#include "Templates/SubclassOf.h"
#include "WeaponInfo.generated.h"

class AWeaponActor;

USTRUCT(BlueprintType)
struct ABSOLVER_API FWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponSlot m_Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponActor> m_WeaponClass;
    
    FWeaponInfo();
};

