#include "ScoreRecap1v1Widget.h"

UScoreRecap1v1Widget::UScoreRecap1v1Widget() {
    this->m_LineRecap1v1WidgetClassToSpawn = NULL;
    this->m_iOwnerScore = 0;
    this->m_iEnemyScore = 0;
}

void UScoreRecap1v1Widget::BPF_CreateChildsFromRound(UPanelWidget* _parentWidget, const FMargin& _padding) {
}


