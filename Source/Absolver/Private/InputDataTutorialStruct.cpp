#include "InputDataTutorialStruct.h"

FInputDataTutorialStruct::FInputDataTutorialStruct() {
    this->m_eInputAction = InputAction::Attack1;
    this->m_InputDataPad = NULL;
    this->m_InputDataMouse = NULL;
    this->m_eAxisType = EControllerIconAxisTypes::Horizontal;
    this->m_InputDataTutorialDisplayConstraint = EInputDataTutorialDisplayConstraints::KeyboardMouseOnly;
}

