#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "PlayerProfile.h"
#include "SCLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API USCLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentZoneChanged, int32, _zone);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnCurrentZoneChanged m_OnCurrentZoneChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlayerProfile m_PlayerProfile;
    
public:
    USCLocalPlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetCurrentZone() const;
    
};

