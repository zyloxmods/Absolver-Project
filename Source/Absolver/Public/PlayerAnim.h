#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AnimContainer.h"
#include "AnimQuadrantStruct.h"
#include "AnimStructAltar.h"
#include "AnimStructAttack.h"
#include "AnimStructBeingRevived.h"
#include "AnimStructChangeQuadrant.h"
#include "AnimStructDeath.h"
#include "AnimStructDodge.h"
#include "AnimStructEmote.h"
#include "AnimStructHandPose.h"
#include "AnimStructHitted.h"
#include "AnimStructItemUse.h"
#include "AnimStructMoveTransition.h"
#include "AnimStructRevive.h"
#include "AnimStructSpawn.h"
#include "AnimStructSpecial.h"
#include "AnimStructWeaponAction.h"
#include "BlendSpaceContainer.h"
#include "EAnimMetaState.h"
#include "EBlendingStateSteps.h"
#include "EBlendingStates.h"
#include "EFallLevel.h"
#include "ELimbs.h"
#include "EMoveStatus.h"
#include "EMoveTransitionType.h"
#include "EQuadrantTypes.h"
#include "EStatsAppliedMode.h"
#include "LookAtStruct.h"
#include "MoveStatus.h"
#include "MovementMode.h"
#include "SpeedState.h"
#include "SwitchIdleType.h"
#include "PlayerAnim.generated.h"

class UAnimSequence;
class UCurveFloat;
class UCurveVector;
class UFidgetDB;
class UHandPoseDB;
class UMirrorAnimDB;
class UVariableWeightStateDescriptorDB;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API UPlayerAnim : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_StateWeightArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVariableWeightStateDescriptorDB* m_VariableWeightDescriptorRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_VariableWeightLayerWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eFidgetPreviousFrameMoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fWantedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_StartAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_StopAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_UTurnAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FAnimStructMoveTransition m_LandingAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV1V2ThresholdSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructAttack m_AttackStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimQuadrantStruct m_QuadrantStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnimContainerBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_IdleUpperBodyBlendSpaceContainerBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAnimContainer> m_FreeMoveAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructDodge m_DodgeStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimStructSpecial m_SpecialAnimStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiCombatStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bWantCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_CancelAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fCancelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCancelMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bStartMeditation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bStopMeditation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsMeditating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIdleFullyBlended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FAnimStructHitted m_HittedAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantFreezeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bParriedInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iParriedProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructChangeQuadrant m_ChangeQuadrantAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructDeath m_DeathAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_GuardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_GuardPrepAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bGuardInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fGuardPrepRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFidgetDB* m_FidgetDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFidgetAnimPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_FidgetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantsFidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eFidgetQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorAnimDB* m_MirrorAnimDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FAnimStructWeaponAction m_WeaponActionAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_LastActionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bLastActionAnimInMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fLastActionAnimCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fLastActionAnimIdealCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructSpawn m_SpawnAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforePlayingSpawnAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructHandPose m_HandPoseAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHandPoseDB* m_HandPoseDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructRevive m_ReviveAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructBeingRevived m_BeingRevivedAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_AnimDeathWaitingForRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructItemUse m_ItemUseAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructEmote m_EmoteAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimStructAltar m_AltarInteractionAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bAvoidedInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bInIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_LookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLookAtStruct> m_LookatArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_HorizontalToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_VerticalToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> m_RotatorToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLookAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWeightLookatLerpFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vOwnerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fOwnerVelocityLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBlendspaceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fBlendspaceAngleMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fLockMovePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV1BaseSPeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV2BaseSPeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV3BaseSPeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV1OverAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV2OverAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fFreeMoveV3OverAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanDeactivationDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLeanMaxAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProceduralLeanLerpTarget[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_ProceduralLeanAngleRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCinematicWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovementMode m_MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFallLevel m_eFallLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNoTransitionBetweenEmotes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eCurrentQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPickUpWeaponWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpine1AlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpine2AlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpine3AlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpine1Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpine2Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpine3Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fSpineModifsWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_vProceduralShakePelvisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fProceduralShakePelvisWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingPelvisHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFallInProgress1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFallInProgress2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_UseVariableWeightInFreeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_UseVariableWeightInFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaPickUpLockmove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocityMinMarginForDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocityMaxMarginForDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxPlayRateUpperBodyDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayRateUpperBodyDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseUpperBodySyncLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPelvisAlphaDrunkenRotateTranslate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaDrunkenBonesTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaDrunkenBonesTranslationPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorFigdetNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaUpperSpeedPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAlphaOutWeaponAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAlphaOutWeaponActionBis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaOutWeaponActionBisCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fHandPoseBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHandPoseBlendWeightIsNullOrNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoveStatus m_MoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpeedState m_SpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwitchIdleType m_SwitchIdleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bOptimizationFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPickUpWeaponBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpineModifWeaponBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_ProceduralShakeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralShakePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralShakeStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ProceduralLandingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralLandingBlendOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralMediumLandingAmplitudeCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProceduralMediumLandingDurationCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AnimLayerByStunCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPelvisAlphaDrunkenRotateTranslateValueDrunkenInPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaDrunkenBonesTranslationDrunkenInPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPelvisAlphaDrunkenRotateTranslateValueDrunkenNoPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaDrunkenBonesTranslationDrunkenNoPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaSpine1MaxNoDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaSpine2MaxNoDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaSpine3MaxNoDrunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaUpperSpeedPickupInV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaUpperSpeedPickupInV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAlphaUpperSpeedPickupInV3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendSwitchWeaponFamilyDuration;
    
public:
    UPlayerAnim();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUTurnType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStopType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartV3Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartV2Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartV1Type(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastStartInterrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLandingType(EMoveTransitionType _enumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMoveTransitionType GetUTurnTypeFromAnimState(EMoveTransitionType _eCurrentTurnType, uint8 _uiAnimState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTrackingPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateWeight(int32 _iStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSavedTransform(int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoveTransitionType GetLastUTurnTransitionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoveTransitionType GetLastStartTransitionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHitTargetPosition(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimIKAlpha(ELimbs _eLimbs, int32 _iAttackStateID);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSpineAlphaMax(float _fSpine1Alpha, float _fSpine2Alpha, float _fSpine3Alpha);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetVariableWeightInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetLookAt();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetFidgetVars();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnChangeNewlyStopped(EAnimMetaState _eMetaState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnChangeNewlyStarted(EAnimMetaState _eMetaState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnChangeNewlyFullyBlended(EAnimMetaState _eNewlyBlendedState);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_LookAtBlendOut(float _fDT);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlendingStates BPF_GetCurrentBlendingState(EAnimMetaState _eMetaState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlendingStates BPF_GetBlendingState(EBlendingStateSteps _eBlendingStateSteps, EAnimMetaState _eMetaState) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFightingStyleChanged(uint8 _uiNewFightingStyle, EStatsAppliedMode _eStatsAppliedMode);
    
};

