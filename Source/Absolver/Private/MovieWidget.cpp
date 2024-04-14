#include "MovieWidget.h"

UMovieWidget::UMovieWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_MediaTexture = NULL;
    this->m_WidgetTorender = NULL;
    this->m_MediaPlayer = NULL;
}

void UMovieWidget::MediaOpenedCallback(const FString& _url) {
}

void UMovieWidget::MediaEndCallback() {
}

bool UMovieWidget::BPF_OpenMovie(const FString& _url, bool _bLooping) {
    return false;
}

void UMovieWidget::BPF_CloseMovie() {
}


