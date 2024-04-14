#include "TutorialHUD.h"

UTutorialHUD::UTutorialHUD() {
    this->m_TutorialDB = NULL;
}

void UTutorialHUD::BPF_ShowTutorialHUD() {
}

void UTutorialHUD::BPF_SetCurrentTutorialHUDState(ETutorialHUDState _newState) {
}

void UTutorialHUD::BPF_SelectTutoAtIndex(int32 _iTutoIndex) {
}

void UTutorialHUD::BPF_HideTutorialHUD() {
}

TArray<FName> UTutorialHUD::BPF_GetUnlockedTutorialsRowName() const {
    return TArray<FName>();
}

FName UTutorialHUD::BPF_GetTutoRowNameAtIndex(int32 _iTutoIndex) {
    return NAME_None;
}

TMap<FName, FTutorialUnlockStruct> UTutorialHUD::BPF_GetTutorialUnlockStateMap() const {
    return TMap<FName, FTutorialUnlockStruct>();
}

ETutorialUnlockState UTutorialHUD::BPF_GetTutorialUnlockStateAtIndex(int32 _TutoIndex) {
    return ETutorialUnlockState::Locked;
}

ETutorialUnlockState UTutorialHUD::BPF_GetTutorialUnlockState(FName _tutoRowName) {
    return ETutorialUnlockState::Locked;
}

ETutorialHUDState UTutorialHUD::BPF_GetTutorialHUDState() {
    return ETutorialHUDState::TutorialSelection;
}

FTutorialDataRow UTutorialHUD::BPF_GetTutorialDataRowFromDB(FName _rowName) {
    return FTutorialDataRow{};
}

FName UTutorialHUD::BPF_GetSelectedTutoRowName() {
    return NAME_None;
}

FTutorialDataRow UTutorialHUD::BPF_GetSelectedTutorialDataRowFromDB() {
    return FTutorialDataRow{};
}







