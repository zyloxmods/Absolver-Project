#pragma once
#include "CoreMinimal.h"
#include "SubZoneShortcutStruct.generated.h"

USTRUCT(BlueprintType)
struct FSubZoneShortcutStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAShortCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSubZone;
    
    ABSOLVER_API FSubZoneShortcutStruct();
};

