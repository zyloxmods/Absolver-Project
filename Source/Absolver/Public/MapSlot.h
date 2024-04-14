#pragma once
#include "CoreMinimal.h"
#include "MapConfig.h"
#include "MenuSlot.h"
#include "MapSlot.generated.h"

class UMapChoices;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UMapSlot : public UMenuSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMapConfig m_MapConfig;
    
public:
    UMapSlot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetWorldToLoadAsPackage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UWorld> BPF_GetWorldToLoad();
    
    UFUNCTION(BlueprintCallable)
    UMapChoices* BPF_GetMapPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitSlot(const FText& _mapName);
    
};

