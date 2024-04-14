#include "MessageManager.h"
#include "MessengerComponent.h"

UMessageManager::UMessageManager() {
    this->m_MessengerComponent = CreateDefaultSubobject<UMessengerComponent>(TEXT("MessengerComponent"));
}


