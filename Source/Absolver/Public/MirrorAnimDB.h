#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MirrorAnimStruct.h"
#include "MirrorAnimDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UMirrorAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMirrorAnimStruct> m_MirrorAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMirrorAnimStruct> m_MirrorAnimStructMap;
    
    UMirrorAnimDB();

    UFUNCTION(BlueprintCallable)
    FName BPF_GetTwinsBoneName(const FName& _boneName);
    
};

