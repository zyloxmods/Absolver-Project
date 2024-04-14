#pragma once
#include "CoreMinimal.h"
#include "MTCompositeCommnad.h"
#include "MTCompositeCommand_DeleteOrphanVertices.generated.h"

UCLASS(Blueprintable)
class MESHTOOLRUNTIME_API UMTCompositeCommand_DeleteOrphanVertices : public UMTCompositeCommnad {
    GENERATED_BODY()
public:
    UMTCompositeCommand_DeleteOrphanVertices();

};

