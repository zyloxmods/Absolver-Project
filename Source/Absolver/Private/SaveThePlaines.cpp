#include "SaveThePlaines.h"

USaveThePlaines::USaveThePlaines() {
    this->m_uiVersion = 9;
    this->m_eSex = ECharacterSex::Man;
    this->m_uiSkinToneIndex = 0;
    this->m_iCurrentPreset = 0;
    this->m_Resources[0] = 0;
    this->m_Resources[1] = 0;
    this->m_bTutoMovesetDone = false;
    this->m_uiCombatStyle = 0;
    this->m_CharacterBuild = NULL;
    this->m_MatchmakingZone = 0;
    this->m_uiMatchmakingSubZone = 0;
    this->m_bTutoCompleted = false;
    this->m_bIsAnAbsolver = false;
    this->m_bTutoIntroPassed = false;
    this->m_bIntroPassed = false;
}


