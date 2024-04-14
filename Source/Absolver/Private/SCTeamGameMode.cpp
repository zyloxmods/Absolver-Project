#include "SCTeamGameMode.h"

ASCTeamGameMode::ASCTeamGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NbPlayersWanted = 1;
    this->m_iScoreLimit = 750;
    this->m_fMatchTime = 600.00f;
}


