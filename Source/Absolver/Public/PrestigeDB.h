#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "PrestigeGradeData.h"
#include "PrestigeMaterialParameters.h"
#include "PrestigeDB.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UTexture2D;
class UThePlainesGameInstance;

UCLASS(Blueprintable)
class ABSOLVER_API UPrestigeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_defaultXPBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_prestigeXPBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrestigeMaterialParameters> m_materialsParameters;
    
    UPrestigeDB();

    UFUNCTION(BlueprintCallable)
    FLinearColor BPF_GetXPBarColor(int32 _iPrestigeGrade);
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetPrestigeGradeData(int32 _iPrestigeGrade, UMaterialInstanceDynamic* _dynMaterial, UImage* _iconWidget, UThePlainesGameInstance* _instance, FPrestigeGradeData& _outData);
    
};

