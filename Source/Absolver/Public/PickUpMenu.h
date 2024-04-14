#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "PickUpMenu.generated.h"

class UResourcesTexturesData;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UPickUpMenu : public UHUDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourcesTexturesData* m_RessourcesDataAsset;
    
public:
    UPickUpMenu();

    UFUNCTION(BlueprintCallable)
    void LoadPictoCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnClose();
    
};

