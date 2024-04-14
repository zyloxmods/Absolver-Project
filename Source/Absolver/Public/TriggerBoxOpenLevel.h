#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerBoxOpenLevel.generated.h"

class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UTriggerBoxOpenLevel : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> m_LevelToLoad;
    
public:
    UTriggerBoxOpenLevel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FString GetLevelNameToLoad();
    
};

