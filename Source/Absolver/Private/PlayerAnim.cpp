#include "PlayerAnim.h"

UPlayerAnim::UPlayerAnim() {
    this->m_VariableWeightDescriptorRoot = NULL;
    this->m_eFidgetPreviousFrameMoveStatus = EMoveStatus::Exploration;
    this->m_fWantedSpeed = 0.00f;
    this->m_fFreeMoveV1V2ThresholdSpeed = 250.00f;
    this->m_FreeMoveAnimContainer.AddDefaulted(4);
    this->m_uiCombatStyle = 0;
    this->m_bWantCancel = false;
    this->m_CancelAnim = NULL;
    this->m_fCancelDuration = 0.00f;
    this->m_bCancelMirror = false;
    this->m_bStartMeditation = false;
    this->m_bStopMeditation = false;
    this->m_bIsMeditating = false;
    this->m_bIdleFullyBlended = true;
    this->m_bWantFreezeFrame = false;
    this->m_bParriedInProgress = false;
    this->m_iParriedProfile = 0;
    this->m_GuardAnim.AddDefaulted(4);
    this->m_GuardPrepAnim.AddDefaulted(4);
    this->m_bGuardInProgress = false;
    this->m_fGuardPrepRatio = 0.00f;
    this->m_FidgetDB = NULL;
    this->m_bFidgetAnimPlaying = false;
    this->m_FidgetAnim = NULL;
    this->m_bWantsFidget = false;
    this->m_eFidgetQuadrant = EQuadrantTypes::None;
    this->m_MirrorAnimDB = NULL;
    this->m_LastActionAnim = NULL;
    this->m_bLastActionAnimInMirror = false;
    this->m_fLastActionAnimCursor = 0.00f;
    this->m_fLastActionAnimIdealCursor = 0.00f;
    this->m_fTimeBeforePlayingSpawnAnim = 2.00f;
    this->m_HandPoseDB = NULL;
    this->m_AnimDeathWaitingForRevive = NULL;
    this->m_bAvoidedInProgress = false;
    this->m_bInIdleState = true;
    this->m_fLookAtDistance = 350.00f;
    this->m_fWeightLookatLerpFactor = 4.00f;
    this->m_fOwnerVelocityLength = 0.00f;
    this->m_fBlendspaceAngle = 0.00f;
    this->m_fBlendspaceAngleMirror = 0.00f;
    this->m_fLockMovePlayRate = 1.00f;
    this->m_fFreeMoveV1BaseSPeed = 0.00f;
    this->m_fFreeMoveV2BaseSPeed = 0.00f;
    this->m_fFreeMoveV3BaseSPeed = 0.00f;
    this->m_fFreeMoveV1OverAll = 0.00f;
    this->m_fFreeMoveV2OverAll = 0.00f;
    this->m_fFreeMoveV3OverAll = 0.00f;
    this->m_fProceduralLeanDeactivationDamping = 12.00f;
    this->m_fProceduralLeanDamping = 3.00f;
    this->m_fProceduralLeanRatio = 0.50f;
    this->m_fProceduralLeanMaxAngle = 20.00f;
    this->m_ProceduralLeanLerpTarget[0] = 0.00f;
    this->m_ProceduralLeanLerpTarget[1] = 0.00f;
    this->m_ProceduralLeanLerpTarget[2] = 0.00f;
    this->m_ProceduralLeanLerpTarget[3] = 0.00f;
    this->m_fCinematicWeight = 0.00f;
    this->m_eFallLevel = EFallLevel::Light;
    this->m_eMoveStatus = EMoveStatus::Exploration;
    this->m_bNoTransitionBetweenEmotes = false;
    this->m_eCurrentQuadrant = EQuadrantTypes::FrontLeft;
    this->m_fPickUpWeaponWeight = 0.00f;
    this->m_fSpine1AlphaMax = 0.50f;
    this->m_fSpine2AlphaMax = 0.30f;
    this->m_fSpine3AlphaMax = 0.50f;
    this->m_fSpine1Alpha = 0.50f;
    this->m_fSpine2Alpha = 0.30f;
    this->m_fSpine3Alpha = 0.50f;
    this->m_fSpineModifsWeight = 1.00f;
    this->m_fProceduralShakePelvisWeight = 0.00f;
    this->m_fProceduralLandingPelvisHeight = 0.00f;
    this->m_bFallInProgress1 = false;
    this->m_bFallInProgress2 = false;
    this->m_fProceduralLandingWeight = 0.00f;
    this->m_UseVariableWeightInFreeMove = false;
    this->m_UseVariableWeightInFall = false;
    this->m_fAlphaPickUpLockmove = 0.00f;
    this->m_fVelocityMinMarginForDrunken = 100.00f;
    this->m_fVelocityMaxMarginForDrunken = 220.00f;
    this->m_fMaxPlayRateUpperBodyDrunken = 1.50f;
    this->m_fPlayRateUpperBodyDrunken = 0.00f;
    this->m_bUseUpperBodySyncLayer = false;
    this->m_fPelvisAlphaDrunkenRotateTranslate = 0.00f;
    this->m_fAlphaDrunkenBonesTranslation = 0.00f;
    this->m_fAlphaDrunkenBonesTranslationPickUp = 0.00f;
    this->m_bMirrorFigdetNeeded = false;
    this->m_fAlphaUpperSpeedPickup = 0.00f;
    this->m_fAlphaOutWeaponAction = 0.00f;
    this->m_fAlphaOutWeaponActionBis = 0.00f;
    this->m_fAlphaOutWeaponActionBisCoeff = 0.60f;
    this->m_fHandPoseBlendWeight = 0.00f;
    this->m_bHandPoseBlendWeightIsNullOrNegative = true;
    this->m_bOptimizationFrame = true;
    this->m_fPickUpWeaponBlendDuration = 0.20f;
    this->m_fSpineModifWeaponBlendDuration = 0.20f;
    this->m_ProceduralShakeCurve = NULL;
    this->m_fProceduralShakePlayRate = 1.00f;
    this->m_fProceduralShakeStrength = 1.00f;
    this->m_ProceduralLandingCurve = NULL;
    this->m_fProceduralLandingDuration = 1.00f;
    this->m_fProceduralLandingBlendOutSpeed = 80.00f;
    this->m_fProceduralMediumLandingAmplitudeCoef = 1.50f;
    this->m_fProceduralMediumLandingDurationCoef = 1.50f;
    this->m_AnimLayerByStunCurve = NULL;
    this->m_fPelvisAlphaDrunkenRotateTranslateValueDrunkenInPickUp = 0.60f;
    this->m_fAlphaDrunkenBonesTranslationDrunkenInPickUp = 0.00f;
    this->m_fPelvisAlphaDrunkenRotateTranslateValueDrunkenNoPickUp = 0.60f;
    this->m_fAlphaDrunkenBonesTranslationDrunkenNoPickUp = 1.00f;
    this->m_fAlphaSpine1MaxNoDrunken = 0.50f;
    this->m_fAlphaSpine2MaxNoDrunken = 0.30f;
    this->m_fAlphaSpine3MaxNoDrunken = 0.50f;
    this->m_fAlphaUpperSpeedPickupInV1 = 1.00f;
    this->m_fAlphaUpperSpeedPickupInV2 = 0.60f;
    this->m_fAlphaUpperSpeedPickupInV3 = 0.20f;
    this->m_fBlendSwitchWeaponFamilyDuration = 0.40f;
}

bool UPlayerAnim::IsV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsUTurnType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStopType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartV3Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartV2Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartV1Type(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsStartType(EMoveTransitionType _enumValue) {
    return false;
}

bool UPlayerAnim::IsLastStartInterrupted() {
    return false;
}

bool UPlayerAnim::IsLandingType(EMoveTransitionType _enumValue) {
    return false;
}

EMoveTransitionType UPlayerAnim::GetUTurnTypeFromAnimState(EMoveTransitionType _eCurrentTurnType, uint8 _uiAnimState) {
    return EMoveTransitionType::StopV1;
}

FVector UPlayerAnim::GetTrackingPosition(ELimbs _eLimbs, int32 _iAttackStateID) {
    return FVector{};
}

float UPlayerAnim::GetStateWeight(int32 _iStateID) {
    return 0.0f;
}

FTransform UPlayerAnim::GetSavedTransform(int32 _iSlotIndex) {
    return FTransform{};
}

EMoveTransitionType UPlayerAnim::GetLastUTurnTransitionType() {
    return EMoveTransitionType::StopV1;
}

EMoveTransitionType UPlayerAnim::GetLastStartTransitionType() {
    return EMoveTransitionType::StopV1;
}

FVector UPlayerAnim::GetHitTargetPosition(ELimbs _eLimbs, int32 _iAttackStateID) {
    return FVector{};
}

float UPlayerAnim::GetAimIKAlpha(ELimbs _eLimbs, int32 _iAttackStateID) {
    return 0.0f;
}

void UPlayerAnim::BPF_SetSpineAlphaMax(float _fSpine1Alpha, float _fSpine2Alpha, float _fSpine3Alpha) {
}

void UPlayerAnim::BPF_ResetVariableWeightInfo() {
}

void UPlayerAnim::BPF_ResetLookAt() {
}

void UPlayerAnim::BPF_ResetFidgetVars() {
}

void UPlayerAnim::BPF_OnChangeNewlyStopped(EAnimMetaState _eMetaState) {
}

void UPlayerAnim::BPF_OnChangeNewlyStarted(EAnimMetaState _eMetaState) {
}

void UPlayerAnim::BPF_OnChangeNewlyFullyBlended(EAnimMetaState _eNewlyBlendedState) {
}

void UPlayerAnim::BPF_LookAtBlendOut(float _fDT) {
}

EBlendingStates UPlayerAnim::BPF_GetCurrentBlendingState(EAnimMetaState _eMetaState) const {
    return EBlendingStates::FullyBlended;
}

EBlendingStates UPlayerAnim::BPF_GetBlendingState(EBlendingStateSteps _eBlendingStateSteps, EAnimMetaState _eMetaState) const {
    return EBlendingStates::FullyBlended;
}



