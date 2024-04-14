#include "VisibleWeaponActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AVisibleWeaponActor::AVisibleWeaponActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->m_SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Component"));
    this->m_Handler = NULL;
    this->m_FallCurve = NULL;
    this->m_FallCurveEven = NULL;
    this->m_DropCurve = NULL;
    this->m_fBaseFallHorizontalSpeed = 400.00f;
    this->m_fMinimumHeightAboveDestination = 250.00f;
    this->m_fMinFallTime = 1.00f;
    this->m_fMaxFallTime = 2.00f;
    this->m_fDestinationZOffset = 15.00f;
    this->m_fSwordMeshRelocDuration = 0.20f;
    this->m_uiSwordFallRotationSpeedFactor = 2;
    this->m_ui1stGloveFallRotationSpeedFactor = 3;
    this->m_ui2ndGloveFallRotationSpeedFactor = 6;
    this->m_f2ndGloveFallDurationRatio = 1.25f;
    this->m_f2ndGloveFallHeightRatio = 1.25f;
    this->m_fReboundDuration = 0.16f;
    this->m_fReboundHeight = 11.00f;
    this->m_fHorizontalOffsetBetweenWeaponsAtLanding = 10.00f;
    this->m_fVolontaryDropFallTime = 0.40f;
    this->m_fMaxDistanceForBlendCorrection = 100.00f;
    this->m_fLyingDurationBeforeFolding = 30.00f;
    this->m_PickableWeaponClass = NULL;
    this->m_bOutlineWeaponWhenLying = true;
    this->m_bOutlineWeaponWhenHoldedByOthers = true;
    this->m_SkeletalMeshComponent->SetupAttachment(RootComponent);
}

EWeaponStatus AVisibleWeaponActor::BPF_GetWeaponStatus() const {
    return EWeaponStatus::Handled;
}

USkeletalMeshComponent* AVisibleWeaponActor::BPF_GetMesh() const {
    return NULL;
}







