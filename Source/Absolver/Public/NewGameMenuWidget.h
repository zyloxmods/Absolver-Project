#pragma once
#include "CoreMinimal.h"
#include "ESaveValidationResult.h"
#include "MenuWidget.h"
#include "NewGameMenuWidget.generated.h"

class AFightingCharacter;
class UCharacterBuildDB;
class UCharacterBuildListDB;
class UEquipmentData;
class UObject;
class USaveThePlaines;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UNewGameMenuWidget : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFightingCharacter> m_PreviewCharac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEquipmentData*> m_Hairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iHairColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBuildListDB* m_BuildList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveThePlaines* m_NewSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_RetainedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxCharacterNameLength;
    
public:
    UNewGameMenuWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnItemLoaded(const TArray<TSoftObjectPtr<UObject>>& _items);
    
    UFUNCTION(BlueprintCallable)
    void OnAssetLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_ValidateAndSaveProfile();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateSaveName(const FString& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSkinToneIndex(int32 _iNewIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNewSaveCharaSex(int32 _iNewSelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetHairCut(int32 _iNewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveValidationResult BPF_SaveNameIsValid(const FString& _name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterBuildDB* BPF_GetCurrentPreset();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeBuild(int32 _iBuildIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ProfileSaved(bool _bResult);
    
};

