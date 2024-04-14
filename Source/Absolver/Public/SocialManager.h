#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SocialManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USocialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoopResolutionTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoopResolutionReturningPvETimeOut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NbNeededPlayersPerGameMode[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NbMaxPlayersPerGameMode[3];
    
public:
    USocialManager();

};

