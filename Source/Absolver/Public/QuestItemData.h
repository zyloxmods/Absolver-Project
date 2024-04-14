#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "QuestItemData.generated.h"

class UProgressionDoorData;

UCLASS(Blueprintable)
class ABSOLVER_API UQuestItemData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProgressionDoorData* m_ProgressionDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ScalarParameterName;
    
    UQuestItemData();

};

