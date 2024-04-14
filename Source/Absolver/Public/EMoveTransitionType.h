#pragma once
#include "CoreMinimal.h"
#include "EMoveTransitionType.generated.h"

UENUM(BlueprintType)
enum class EMoveTransitionType : uint8 {
    StopV1,
    StopV2,
    StopV3,
    StartV1,
    StartV1_90L,
    StartV1_180L,
    StartV1_90R,
    StartV1_180R,
    StartV2,
    StartV2_90L,
    StartV2_180L,
    StartV2_90R,
    StartV2_180R,
    StartV3,
    StartV3_90L,
    StartV3_180L,
    StartV3_90R,
    StartV3_180R,
    UTurnV1_R,
    UTurnV1_L,
    UTurnV2_R,
    UTurnV2_L,
    UTurnV3_R,
    UTurnV3_L,
    V1ToV2,
    V1ToV3,
    V2ToV1,
    V2ToV3,
    V3ToV1,
    V3ToV2,
    UTurnV1_RBis,
    UTurnV1_LBis,
    UTurnV2_RBis,
    UTurnV2_LBis,
    UTurnV3_RBis,
    UTurnV3_LBis,
    MediumLanding,
    OnPlaceMediumLanding,
    Count,
    None,
};
