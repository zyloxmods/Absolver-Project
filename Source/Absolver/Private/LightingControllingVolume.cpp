#include "LightingControllingVolume.h"
#include "Components/BoxComponent.h"

ALightingControllingVolume::ALightingControllingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightToAffect = NULL;
    this->bCopyLParams = false;
    this->SkyLightToAffect = NULL;
    this->bCopySLParams = false;
    this->HFogToAffect = NULL;
    this->bCopyHParams = false;
    this->AtmosphericFogToAffect = NULL;
    this->bCopyAParams = false;
    this->SkySphereToAffect = NULL;
    this->SkyMaterialReference = NULL;
    this->bFollowSunLight = false;
    this->bReplaceTextures = false;
    this->TextureReplacementPoint = 0.50f;
    this->VolumeBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBoundsComponent"));
    this->Distance = 0.00f;
    this->Priority = 0;
    this->Preview = 0.00f;
    this->VolumeBounds->SetupAttachment(RootComponent);
}

void ALightingControllingVolume::OnVolumeEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

void ALightingControllingVolume::OnVolumeBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ALightingControllingVolume::OnBoundEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

void ALightingControllingVolume::OnBoundBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}


