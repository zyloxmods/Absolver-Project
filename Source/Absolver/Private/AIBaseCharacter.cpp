#include "AIBaseCharacter.h"
#include "AIComponent.h"

AAIBaseCharacter::AAIBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->bReplicateMovement = false;
    this->bReplicates = false;
  //  this->RemoteRole = ROLE_None;
    this->m_AIComponent = CreateDefaultSubobject<UAIComponent>(TEXT("AIComponent"));
}

void AAIBaseCharacter::Spawned(AAISpawner* _spawner) {
}


