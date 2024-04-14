#include "AsyncTaskProgress.h"

UAsyncTaskProgress::UAsyncTaskProgress() {
    this->m_Curve = NULL;
}

void UAsyncTaskProgress::BPF_Stop(bool _bEnd) {
}

UAsyncTaskProgress* UAsyncTaskProgress::BPF_StartProgress(UObject* _menu, float _fDuration, UCurveFloat* _curve) {
    return NULL;
}

void UAsyncTaskProgress::BPF_Resume() {
}

void UAsyncTaskProgress::BPF_Restart() {
}

void UAsyncTaskProgress::BPF_Pause() {
}


