#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "SCPlayerStart.generated.h"

UCLASS(Blueprintable)
class ASCPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForFirstSpawn;
    
public:
    ASCPlayerStart(const FObjectInitializer& ObjectInitializer);

};

