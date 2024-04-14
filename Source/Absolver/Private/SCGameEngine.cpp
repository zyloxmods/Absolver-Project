#include "SCGameEngine.h"
#include "SCLocalPlayer.h"

USCGameEngine::USCGameEngine() {
    this->LocalPlayerClass = USCLocalPlayer::StaticClass();
    this->ShaderComplexityColors.AddDefaulted(9);
    this->QuadComplexityColors.AddDefaulted(11);
    this->LightComplexityColors.AddDefaulted(17);
    this->StationaryLightOverlapColors.AddDefaulted(9);
    this->LODColorationColors.AddDefaulted(8);
    this->HLODColorationColors.AddDefaulted(7);
    this->StreamingAccuracyColors.AddDefaulted(5);
    this->StatColorMappings.AddDefaulted(3);
    this->ActiveGameNameRedirects.AddDefaulted(2);
    this->ActiveClassRedirects.AddDefaulted(230);
    this->ActiveStructRedirects.AddDefaulted(4);
    this->NetDriverDefinitions.AddDefaulted(1);
}


