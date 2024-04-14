#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkinToneGender.h"
#include "SkinTonesDB.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class ABSOLVER_API USkinTonesDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkinToneGender> m_SkinTones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_BaseFXMaterials[10];
    
    USkinTonesDB();

};

