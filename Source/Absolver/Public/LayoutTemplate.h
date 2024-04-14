#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LayoutRoom.h"
#include "LayoutTemplate.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ULayoutTemplate : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBaseDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLayoutRoom> m_Rooms;
    
    ULayoutTemplate();

};

