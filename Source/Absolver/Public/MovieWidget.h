#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MovieWidget.generated.h"

class UImage;
class UMediaPlayer;
class UMediaTexture;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UMovieWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndReached);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_WidgetTorender;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndReached OnEndReached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* m_MediaPlayer;
    
public:
    UMovieWidget();

private:
    UFUNCTION(BlueprintCallable)
    void MediaOpenedCallback(const FString& _url);
    
    UFUNCTION(BlueprintCallable)
    void MediaEndCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_OpenMovie(const FString& _url, bool _bLooping);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMovie();
    
};

