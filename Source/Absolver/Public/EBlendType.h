#pragma once
#include "CoreMinimal.h"
#include "EBlendType.generated.h"

UENUM(BlueprintType)
enum class EBlendType : uint8 {
    Linear,
    Parabolic,
    Cubic,
    Exponential,
    Cosine,
    QuadraticIn,
    QuadraticOut,
    QuadraticInOut,
    CubicIn,
    CubicOut,
    CubicInOut,
    CubicAnim,
    QuarticIn,
    QuarticOut,
    QuarticInOut,
    QuinticIn,
    QuinticOut,
    QuinticInOut,
    SinusoidalIn,
    SinusoidalOut,
    SinusoidalInOut,
    ExponentialIn,
    ExponentialOut,
    ExponentialInOut,
    Exponential2In,
    Exponential2Out,
    Exponential2InOut,
    CircularIn,
    CircularOut,
    CircularInOut,
    CustomCurve,
};

