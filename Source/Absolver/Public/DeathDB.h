#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeathAnimQuadrantArray.h"
#include "Templates/SubclassOf.h"
#include "DeathDB.generated.h"

class AReviveInteractiveObject;
class UAnimSequence;

UCLASS(Blueprintable)
class ABSOLVER_API UDeathDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRagdollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFallRagdollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeathBPEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCanBeRevivedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathAnimQuadrantArray m_Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_DefaultAnim;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKnockBackDistance[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_iNbFrameStuned[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReviveInteractiveObject> m_DownInteractiveElement;
    
    UDeathDB();

};

