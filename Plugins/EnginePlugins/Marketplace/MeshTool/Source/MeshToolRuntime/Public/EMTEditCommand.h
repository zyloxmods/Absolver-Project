#pragma once
#include "CoreMinimal.h"
#include "EMTEditCommand.generated.h"

UENUM(BlueprintType)
enum class EMTEditCommand : uint8 {
    DummyCommand,
    TranslateVertices,
    WeldVertices,
    CreateFaceFromVertices,
    DeleteVertices,
    DeleteOrphanVertices,
    ExtrudeFromLocalPositions,
    LoftFromLocalPositions,
    SplitEdge,
    TurnEdge,
    BridgeEdge,
    ExtrudeEdges,
    InsertEdgeLoop,
    BevelEdge,
    FillHole,
    FixSeam,
    CreateQuadFromLocalPositions,
    CreateCircleFromLocalPositions,
    CreateBoxFromQuad,
    FlipFaces,
    FlipAllFaces,
    DeleteFaces,
    ExtrudeFaces,
    PolyInsetFaces,
    DuplicateFaces,
    MirrorFaces,
    SeperateFaces,
    BridgeFace,
    SplitFace,
    UpdateUV,
    AssignMaterial,
    InsertMesh,
    ReplaceMesh,
    ReplaceMeshFast,
    SetInMemoryMesh,
};

