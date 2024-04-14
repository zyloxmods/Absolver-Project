#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "AsyncImage.generated.h"

class UAsyncImage;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class UAsyncImage : public UImage {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncImageDelegate, UAsyncImage*, _image);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncImageDelegate OnLoadingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncImageDelegate OnLoadingCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncImageDelegate OnLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AsyncAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fApparitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_AsyncMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMatchSize;
    
public:
    UAsyncImage();

    UFUNCTION(BlueprintCallable)
    void BPF_SetTexture(UTexture2D* _asset, bool _bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMaterial(UMaterialInterface* _asset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadTextureAssetAsync(TSoftObjectPtr<UTexture2D> _asset, bool _bMatchSize, int32 _iQueueID, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LoadMaterialAssetAsync(TSoftObjectPtr<UMaterialInterface> _asset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Clear();
    
};

