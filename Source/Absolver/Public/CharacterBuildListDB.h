#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterBuildListDB.generated.h"

class UCharacterBuildDB;

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterBuildListDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCharacterBuildDB*> m_CharacterBuilds;
    
    UCharacterBuildListDB();

};

