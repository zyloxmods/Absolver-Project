#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EVW_MasterStates.h"
#include "VariableWeightStateDescriptorDB.generated.h"

class UVariableWeightStateDescriptorDB;

UCLASS(Blueprintable)
class ABSOLVER_API UVariableWeightStateDescriptorDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVW_MasterStates m_eStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iVariableWeightLayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVariableWeightStateDescriptorDB*> m_Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisplayInDebug;
    
    UVariableWeightStateDescriptorDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildrenNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariableWeightStateDescriptorDB* GetChild(int32 _iIndex);
    
};

