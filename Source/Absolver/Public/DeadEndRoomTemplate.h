#pragma once
#include "CoreMinimal.h"
#include "RoomTemplate.h"
#include "DeadEndRoomTemplate.generated.h"

class UStreamingUnit;

UCLASS(Blueprintable)
class ABSOLVER_API UDeadEndRoomTemplate : public URoomTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStreamingUnit*> m_RoomStreamingUnitEast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStreamingUnit*> m_RoomStreamingUnitSouth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStreamingUnit*> m_RoomStreamingUnitWest;
    
public:
    UDeadEndRoomTemplate();

};

