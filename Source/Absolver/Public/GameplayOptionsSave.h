#pragma once
#include "CoreMinimal.h"
#include "GameplayOptionsSave.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FGameplayOptionsSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bSwitchTargetOnAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bInvertCameraXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bInvertCameraYAxis;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iGameplayOptions[7];
    
    FGameplayOptionsSave();
};

