#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AsyncTextureStruct.h"
#include "GetAsyncTextureAssetDelegate.h"
#include "BindableAsyncImage.generated.h"

class UAsyncImage;

UCLASS(Blueprintable, EditInlineNew)
class UBindableAsyncImage : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAsyncImage* m_AsyncImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTextureStruct AsyncTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAsyncTextureAsset AsyncTextureDelegate;
    
public:
    UBindableAsyncImage();

};

