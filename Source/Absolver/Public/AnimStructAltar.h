#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructAltar.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimStructAltar : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Loop;
    
    FAnimStructAltar();
};

