#include "VectorInputData.h"

UVectorInputData::UVectorInputData() {
    this->m_fInnerBound = 0.00f;
    this->m_fOuterBound = 1.00f;
    this->m_Curve = NULL;
    this->m_trumpetSkewData = NULL;
    this->m_bInvertXAxis = false;
    this->m_bInvertYAxis = false;
    this->m_bDebugIsXAxisVertical = false;
    this->m_bNoInputTreatment = false;
}


