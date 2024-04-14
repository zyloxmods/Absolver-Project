#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseRoomTemplate.generated.h"

class UStreamingUnit;

UCLASS(Blueprintable)
class ABSOLVER_API UBaseRoomTemplate : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStreamingUnit*> m_RoomStreamingUnit;
    
public:
    UBaseRoomTemplate();

};

