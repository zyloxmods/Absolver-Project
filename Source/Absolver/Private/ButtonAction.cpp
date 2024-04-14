#include "ButtonAction.h"

FButtonAction::FButtonAction() {
    this->m_eAction = InputAction::Attack1;
    this->m_eInputMode = EUIInputModes::Controller;
    this->m_eAxisType = EControllerIconAxisTypes::Horizontal;
    this->m_Mouse = EActionMouseButtons::Left;
    this->m_MouseModeTexture = NULL;
}

