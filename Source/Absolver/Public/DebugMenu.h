#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "DebugMenu.generated.h"

class AFightingCharacter;
class UCharacterBuildDB;
class UCharacterBuildListDB;
class ULoadSlot;
class UPanelWidget;
class UUsableItemData;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UDebugMenu : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CharacterBuildPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBuildDB* m_DummyCharcterBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBuildListDB* m_CharacterBuildList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadSlot> m_LoadingButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFightingCharacter> m_StartUpCharaClass;
    
public:
    UDebugMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_ShowSaves(UPanelWidget* _boxToFill);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVBoxInvisible();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadEquipmentSelection();
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadCharacterBuild(const FString& _buildName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadAndSetFirstSave(ULoadSlot* _loadSlot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteSaveFromName(const FString& _saveName, UPanelWidget* _boxToRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateNewSave(const FString& _charaName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateCharacterBuild(const FString& _buildName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddItemToInventory(UUsableItemData* _item, int32 _iItemNumber);
    
};

