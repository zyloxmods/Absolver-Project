#include "MathTools.h"

UMathTools::UMathTools() {
}

float UMathTools::SearchReciprocalValueInCurve(const UCurveFloat* _curve, const float _fY) {
    return 0.0f;
}

FVector UMathTools::ProjectPointOnSegment(const FVector& _vA, const FVector& _vB, const FVector& _vPointToTest) {
    return FVector{};
}

FVector UMathTools::ProjectPointOnLine(const FVector& _vA, const FVector& _vDir, const FVector& _vPointToTest) {
    return FVector{};
}

bool UMathTools::IsNearlyLesserOrEqual(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool UMathTools::IsNearlyGreaterOrEqual(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool UMathTools::IsLesserWithEpsilon(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool UMathTools::IsGreaterWithEpsilon(float _fValueA, float _fValueB, float _fTolerance) {
    return false;
}

bool UMathTools::IntersectionSegmentSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vStart, const FVector& _vDirNormalized, float _vLength, const FVector& _vSphereOrigin, const float _fSphereRadius) {
    return false;
}

bool UMathTools::IntersectionCircleCircle(FVector2D& _vOutPointA, FVector2D& _vOutPointB, const FVector2D& _vCenter1, const float _fRadius1, const FVector2D& _vCenter2, const float _fRadius2) {
    return false;
}

FTransform UMathTools::GetTransformLocalToGlobal(const FTransform& _transformBase, const FTransform& _localTransform) {
    return FTransform{};
}

FTransform UMathTools::GetTransformGlobalToLocal(const FTransform& _transformBase, const FTransform& _globalTransform) {
    return FTransform{};
}

FQuat UMathTools::GetQuatLocalToGlobal(const FQuat& _qBase, const FQuat& _qLocal) {
    return FQuat{};
}

FQuat UMathTools::GetQuatGlobalToLocal(const FQuat& _qBase, const FQuat& _qGlobal) {
    return FQuat{};
}

EQuadrantTypes UMathTools::GetQuadrantTowardTarget(AFightingCharacter* _originChar, AActor* _target) {
    return EQuadrantTypes::FrontLeft;
}

EQuadrantTypes UMathTools::GetQuadrantFromStick(const FVector2D& _vStick) {
    return EQuadrantTypes::FrontLeft;
}

FVector UMathTools::GetLocalToGlobalRotator(const FRotator& _rotator, const FVector& _vLocal) {
    return FVector{};
}

FVector UMathTools::GetLocalToGlobal(const FQuat& _qBase, const FVector& _vLocal) {
    return FVector{};
}

FVector UMathTools::GetGlobalToLocalRotator(const FRotator& _rotator, const FVector& _vGlobal) {
    return FVector{};
}

FVector UMathTools::GetGlobalToLocal(const FQuat& _qBase, const FVector& _vGlobal) {
    return FVector{};
}

float UMathTools::GetDiffAngleForceWay(float _fSource, float _fDest, ERotationWay _eBlendWay) {
    return 0.0f;
}

float UMathTools::GetDestinationAngleForceWay(float _fSource, float _fDest, ERotationWay _eBlendWay, int32 _iExtra2Pi) {
    return 0.0f;
}

float UMathTools::GetBlendAngleForceWay(float _fSource, float _fDest, float _fBlendCoef, ERotationWay _eBlendWay, int32 _iExtra2Pi) {
    return 0.0f;
}

float UMathTools::GetBlendAngle(float _fSource, float _fDest, float _fBlendCoef) {
    return 0.0f;
}

ERotationWay UMathTools::GetBaseHipsRotationWayFromQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant) {
    return ERotationWay::ClockWise;
}

float UMathTools::GetBaseHipsAngleFromQuadrant(EQuadrantTypes _eQuadrant) {
    return 0.0f;
}

FVector UMathTools::GetBaseFakePelvisDirection(EQuadrantTypes _eQuadrant, FVector _vRefDir) {
    return FVector{};
}

float UMathTools::GetAngleNegPiToPi(float _fAngle) {
    return 0.0f;
}

ERotationWay UMathTools::GetAngleBlendWay(float _fSource, float _fDest) {
    return ERotationWay::ClockWise;
}

float UMathTools::GetAngle2Pi(float _fAngle) {
    return 0.0f;
}

float UMathTools::Cursorized(float _fValue, float _fLeftMargin, float _fRightMargin, bool _bClamp) {
    return 0.0f;
}

EQuadrantTypes UMathTools::ComputeQuadrantFromDirectionVectors(const FVector& _vRefDir, const FVector& _vOtherVector) {
    return EQuadrantTypes::FrontLeft;
}

ECardinalPoints UMathTools::ComputeCardinalPointWithCustomAngles(const FVector& _vRefDir, const FVector& _vOtherVector, float _fNorthAngleDeg, float _fSouthAngleDeg) {
    return ECardinalPoints::North;
}

ECardinalPoints UMathTools::ComputeCardinalPoint(const FVector& _vRefDir, const FVector& _vOtherVector) {
    return ECardinalPoints::North;
}

ERotationWay UMathTools::ComputeBlendWay(const EQuadrantTypes _eStartQuadrant, const EQuadrantTypes _eEndQuadrant, const float _fStartAngle, const float _fEndAngle) {
    return ERotationWay::ClockWise;
}

float UMathTools::ComputeBlendRatio(float _fRatio, EBlendType _eBlendType, UCurveFloat* _blendCurve) {
    return 0.0f;
}

float UMathTools::AngleBetweenVectorHorizontal(FVector _v1Normalized, FVector _v2Normalized) {
    return 0.0f;
}

float UMathTools::AngleBetweenVectorAbsolute(FVector _v1Normalized, FVector _v2Normalized, FVector _vAxisNormalized) {
    return 0.0f;
}

void UMathTools::AngleBetweenVector(float& _fHorizontalAngle, float& _fVerticalAngle, FVector _v1Normalized, FVector _v2Normalized) {
}


