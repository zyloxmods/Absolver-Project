#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBlendType.h"
#include "ECardinalPoints.h"
#include "EQuadrantTypes.h"
#include "ERotationWay.h"
#include "MathTools.generated.h"

class AActor;
class AFightingCharacter;
class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API UMathTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathTools();

    UFUNCTION(BlueprintCallable)
    static float SearchReciprocalValueInCurve(const UCurveFloat* _curve, const float _fY);
    
    UFUNCTION(BlueprintCallable)
    static FVector ProjectPointOnSegment(const FVector& _vA, const FVector& _vB, const FVector& _vPointToTest);
    
    UFUNCTION(BlueprintCallable)
    static FVector ProjectPointOnLine(const FVector& _vA, const FVector& _vDir, const FVector& _vPointToTest);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNearlyLesserOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNearlyGreaterOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLesserWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGreaterWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable)
    static bool IntersectionSegmentSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vStart, const FVector& _vDirNormalized, float _vLength, const FVector& _vSphereOrigin, const float _fSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    static bool IntersectionCircleCircle(FVector2D& _vOutPointA, FVector2D& _vOutPointB, const FVector2D& _vCenter1, const float _fRadius1, const FVector2D& _vCenter2, const float _fRadius2);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformLocalToGlobal(const FTransform& _transformBase, const FTransform& _localTransform);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformGlobalToLocal(const FTransform& _transformBase, const FTransform& _globalTransform);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetQuatLocalToGlobal(const FQuat& _qBase, const FQuat& _qLocal);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetQuatGlobalToLocal(const FQuat& _qBase, const FQuat& _qGlobal);
    
    UFUNCTION(BlueprintCallable)
    static EQuadrantTypes GetQuadrantTowardTarget(AFightingCharacter* _originChar, AActor* _target);
    
    UFUNCTION(BlueprintCallable)
    static EQuadrantTypes GetQuadrantFromStick(const FVector2D& _vStick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocalToGlobalRotator(const FRotator& _rotator, const FVector& _vLocal);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLocalToGlobal(const FQuat& _qBase, const FVector& _vLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetGlobalToLocalRotator(const FRotator& _rotator, const FVector& _vGlobal);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetGlobalToLocal(const FQuat& _qBase, const FVector& _vGlobal);
    
    UFUNCTION(BlueprintCallable)
    static float GetDiffAngleForceWay(float _fSource, float _fDest, ERotationWay _eBlendWay);
    
    UFUNCTION(BlueprintCallable)
    static float GetDestinationAngleForceWay(float _fSource, float _fDest, ERotationWay _eBlendWay, int32 _iExtra2Pi);
    
    UFUNCTION(BlueprintCallable)
    static float GetBlendAngleForceWay(float _fSource, float _fDest, float _fBlendCoef, ERotationWay _eBlendWay, int32 _iExtra2Pi);
    
    UFUNCTION(BlueprintCallable)
    static float GetBlendAngle(float _fSource, float _fDest, float _fBlendCoef);
    
    UFUNCTION(BlueprintCallable)
    static ERotationWay GetBaseHipsRotationWayFromQuadrant(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant);
    
    UFUNCTION(BlueprintCallable)
    static float GetBaseHipsAngleFromQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBaseFakePelvisDirection(EQuadrantTypes _eQuadrant, FVector _vRefDir);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleNegPiToPi(float _fAngle);
    
    UFUNCTION(BlueprintCallable)
    static ERotationWay GetAngleBlendWay(float _fSource, float _fDest);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngle2Pi(float _fAngle);
    
    UFUNCTION(BlueprintCallable)
    static float Cursorized(float _fValue, float _fLeftMargin, float _fRightMargin, bool _bClamp);
    
    UFUNCTION(BlueprintCallable)
    static EQuadrantTypes ComputeQuadrantFromDirectionVectors(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintCallable)
    static ECardinalPoints ComputeCardinalPointWithCustomAngles(const FVector& _vRefDir, const FVector& _vOtherVector, float _fNorthAngleDeg, float _fSouthAngleDeg);
    
    UFUNCTION(BlueprintCallable)
    static ECardinalPoints ComputeCardinalPoint(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintCallable)
    static ERotationWay ComputeBlendWay(const EQuadrantTypes _eStartQuadrant, const EQuadrantTypes _eEndQuadrant, const float _fStartAngle, const float _fEndAngle);
    
    UFUNCTION(BlueprintCallable)
    static float ComputeBlendRatio(float _fRatio, EBlendType _eBlendType, UCurveFloat* _blendCurve);
    
    UFUNCTION(BlueprintCallable)
    static float AngleBetweenVectorHorizontal(FVector _v1Normalized, FVector _v2Normalized);
    
    UFUNCTION(BlueprintCallable)
    static float AngleBetweenVectorAbsolute(FVector _v1Normalized, FVector _v2Normalized, FVector _vAxisNormalized);
    
    UFUNCTION(BlueprintCallable)
    static void AngleBetweenVector(float& _fHorizontalAngle, float& _fVerticalAngle, FVector _v1Normalized, FVector _v2Normalized);
    
};

