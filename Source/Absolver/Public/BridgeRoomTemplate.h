#pragma once
#include "CoreMinimal.h"
#include "RoomTemplate.h"
#include "BridgeRoomTemplate.generated.h"

class UStreamingUnit;

UCLASS(Blueprintable)
class ABSOLVER_API UBridgeRoomTemplate : public URoomTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStreamingUnit*> m_RoomStreamingUnitEastWest;
    
public:
    UBridgeRoomTemplate();

};

