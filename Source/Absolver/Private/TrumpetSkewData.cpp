#include "TrumpetSkewData.h"

UTrumpetSkewData::UTrumpetSkewData() {
    this->m_fSkewZoneAngleDeg = 0.00f;
    this->m_fSkewZoneRadius = 0.00f;
    this->m_Curve = NULL;
    this->m_eTrumpetSkewType = ETrumpetSkewType::HorizontalVertical;
}


