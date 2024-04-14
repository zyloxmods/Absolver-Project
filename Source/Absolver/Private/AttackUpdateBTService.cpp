#include "AttackUpdateBTService.h"

UAttackUpdateBTService::UAttackUpdateBTService() {
    this->NodeName = TEXT("AttackUpdateService");
    this->m_bAllowNoTarget = false;
    this->m_bAllowAttackInterrupt = true;
}


