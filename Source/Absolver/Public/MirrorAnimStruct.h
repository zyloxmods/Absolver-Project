#pragma once
#include "CoreMinimal.h"
#include "EMirrorAnimBehavior.h"
#include "EPlaneAxis.h"
#include "ESimpleAxis.h"
#include "MirrorAnimStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FMirrorAnimStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMirrorAnimBehavior m_eMirrorBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TwinBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxis m_eMirrorRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneAxis m_eMirrorTranslationPlaneAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSocket;
    
    FMirrorAnimStruct();
};

