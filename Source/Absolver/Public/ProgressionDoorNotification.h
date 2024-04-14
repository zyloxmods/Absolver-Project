#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "ProgressionDoorStruct.h"
#include "ProgressionDoorNotification.generated.h"

class UProgressionDoorNotification;
class UQuestItemData;

UCLASS(Blueprintable)
class UProgressionDoorNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestItemData* m_LastFulfilledQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressionDoorStruct m_ProgressionDoorStruct;
    
    UProgressionDoorNotification();

    UFUNCTION(BlueprintCallable)
    UProgressionDoorNotification* BPF_Init(const FProgressionDoorStruct& _progressionDoorStruct, UQuestItemData* _lastFulfilledQuest);
    
};

