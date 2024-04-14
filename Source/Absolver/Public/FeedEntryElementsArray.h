#pragma once
#include "CoreMinimal.h"
#include "EFeedEntryElements.h"
#include "FeedEntryElementsArray.generated.h"

USTRUCT(BlueprintType)
struct FFeedEntryElementsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFeedEntryElements> m_FeedEntryTypes;
    
    ABSOLVER_API FFeedEntryElementsArray();
};

