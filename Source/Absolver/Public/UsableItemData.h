#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "BaseItemData.h"
#include "EHandPoses.h"
#include "Templates/SubclassOf.h"
#include "UsableItemData.generated.h"

class AUsableItem;

UCLASS(Blueprintable)
class ABSOLVER_API UUsableItemData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiShardsCost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Anims[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandPoses m_eHandPose[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUsableItem> m_UsableItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DBItemRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTargetRecquirements;
    
    UUsableItemData();

};

