#pragma once
#include "CoreMinimal.h"
#include "ActorInfoGameArchive.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FActorInfoGameArchive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UObject* m_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UClass* m_ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_Data;
    
    ABSOLVER_API FActorInfoGameArchive();
};

