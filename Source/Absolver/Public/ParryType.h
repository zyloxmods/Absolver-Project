#pragma once
#include "CoreMinimal.h"
#include "EParryDirection.h"
#include "EParryHeight.h"
#include "EParrySide.h"
#include "ParryType.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FParryType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParryDirection m_eParryDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParrySide m_eParrySide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParryHeight m_eParryHeight;
    
    FParryType();
};

