#include "ShardBaseClass.h"
#include "Components/StaticMeshComponent.h"

AShardBaseClass::AShardBaseClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShardMesh"));
    this->m_TensionShardMesh = (UStaticMeshComponent*)RootComponent;
    this->m_FullMat = NULL;
    this->m_FullMatInstance = NULL;
    this->m_WireMat = NULL;
    this->m_WireMatInstance = NULL;
}

UMaterialInstanceDynamic* AShardBaseClass::GetWireMatInstance() const {
    return NULL;
}

UMaterialInstanceDynamic* AShardBaseClass::GetFullMatInstance() const {
    return NULL;
}




