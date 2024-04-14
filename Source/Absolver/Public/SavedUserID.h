#pragma once
#include "CoreMinimal.h"
#include "EPlatform.h"
#include "SavedUserID.generated.h"

USTRUCT(BlueprintType)
struct FSavedUserID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EPlatform m_Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_Data;
    
    ABSOLVER_API FSavedUserID();
};

