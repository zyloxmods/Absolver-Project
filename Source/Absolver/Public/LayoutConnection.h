#pragma once
#include "CoreMinimal.h"
#include "EConnectionPassageType.h"
#include "ERoomAnchor.h"
#include "LayoutConnection.generated.h"

class UBaseItemData;
class UConnectionTemplate;

USTRUCT(BlueprintType)
struct FLayoutConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomAnchor m_eAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConnectionTemplate* m_ConnectionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsConnectionToNextLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConnectionPassageType m_ePassageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_ItemToUnlockDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseItemData*> m_ItemsToUnlockDoors;
    
    ABSOLVER_API FLayoutConnection();
};

