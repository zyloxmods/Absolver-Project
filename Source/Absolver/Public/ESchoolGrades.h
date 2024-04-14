#pragma once
#include "CoreMinimal.h"
#include "ESchoolGrades.generated.h"

UENUM(BlueprintType)
enum class ESchoolGrades : uint8 {
    NotInSchool,
    Student,
    Disciple,
    Mentor,
};

