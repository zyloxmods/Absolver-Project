#pragma once
#include "CoreMinimal.h"
#include "EConnectionPassageType.h"
#include "ERoomAnchor.h"
#include "AnchorFeed.generated.h"

class UBaseItemData;
class UConnectionTemplate;

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnchorFeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERoomAnchor m_eAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UConnectionTemplate* m_ConnectionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiStreamingunitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EConnectionPassageType m_ePassageType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UBaseItemData>> m_ItemsToUnlockDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bConnectionToNextLayer;
    
    FAnchorFeed();
};

