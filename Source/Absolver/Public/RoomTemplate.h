#pragma once
#include "CoreMinimal.h"
#include "BaseRoomTemplate.h"
#include "RoomTemplate.generated.h"

class UConnectionTemplate;

UCLASS(Blueprintable)
class ABSOLVER_API URoomTemplate : public UBaseRoomTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UConnectionTemplate*> m_NortSouthConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UConnectionTemplate*> m_EastWestConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowStreamingUnitReuse;
    
    URoomTemplate();

};

