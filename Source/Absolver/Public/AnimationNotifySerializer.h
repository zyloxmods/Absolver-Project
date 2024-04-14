#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCAnimNotifyExtraInfo.h"
#include "AnimationNotifySerializer.generated.h"

UCLASS(Blueprintable)
class UAnimationNotifySerializer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationNotifySerializer();

    UFUNCTION(BlueprintCallable)
    static FSCAnimNotifyExtraInfo BPF_ReadNotifyExtraInfoFromBufferArray(const TArray<uint8>& _extraInfoBufferArray);
    
};

