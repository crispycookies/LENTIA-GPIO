//
// Created by TobiEgger on 13.02.2020.
//

#include "PintableBasicImpl.h"

Pintable::gpio_pin_t PintableBasicImpl::getRawPin() const {
	return pin;
}

Pintable::gpio_bank_t PintableBasicImpl::getRawBank() const{
	if(bank == nullptr){
		return nullptr;
	}
	return bank->getRawBank();
}

void PintableBasicImpl::setAF0() {
	alternate_function = 0x00U;
}
void PintableBasicImpl::setAF1() {
	alternate_function = 0x01U;
}
void PintableBasicImpl::setAF2() {
	alternate_function = 0x02U;
}
void PintableBasicImpl::setAF3() {
	alternate_function = 0x03U;
}


void PintableBasicImpl::setAF4() {
	alternate_function = 0x04U;
}
void PintableBasicImpl::setAF5() {
	alternate_function = 0x05U;
}
void PintableBasicImpl::setAF6() {
	alternate_function = 0x06U;
}
void PintableBasicImpl::setAF7() {
	alternate_function = 0x07U;
}

void PintableBasicImpl::setAF8() {
	alternate_function = 0x08U;
}
void PintableBasicImpl::setAF9() {
	alternate_function = 0x09U;
}
void PintableBasicImpl::setAF10() {
	alternate_function = 0x0AU;
}
void PintableBasicImpl::setAF11() {
	alternate_function = 0x0BU;
}

void PintableBasicImpl::setAF12() {
	alternate_function = 0x0CU;
}
void PintableBasicImpl::setAF13() {
	alternate_function = 0x0DU;
}
void PintableBasicImpl::setAF14() {
	alternate_function = 0x0EU;
}
void PintableBasicImpl::setAF15() {
	alternate_function = 0x0FU;
}

void PintableBasicImpl::setSpeedSlow() {
	speed = GPIO_SPEED_FREQ_LOW;
}
void PintableBasicImpl::setSpeedMedium() {
	speed = GPIO_SPEED_FREQ_MEDIUM;
}
void PintableBasicImpl::setSpeedFast() {
	speed = GPIO_SPEED_FREQ_HIGH;
}

void PintableBasicImpl::setPullUp() {
	resistor = GPIO_PULLUP;
}
void PintableBasicImpl::setPullDown() {
	resistor = GPIO_PULLDOWN;
}
void PintableBasicImpl::setPullNone() {
	resistor = GPIO_NOPULL;
}

void PintableBasicImpl::setModeInput() {
	mode = GPIO_MODE_INPUT;
}
void PintableBasicImpl::setModeOutputPushPull() {
	mode = GPIO_MODE_OUTPUT_PP;
}
void PintableBasicImpl::setModeOutputOpenDrain() {
	mode = GPIO_MODE_OUTPUT_OD;
}
void PintableBasicImpl::setModeAlternateFunctionOpenDrain() {
	mode = GPIO_MODE_AF_OD;
}
void PintableBasicImpl::setModeAlternateFunctionPushPull() {
	mode = GPIO_MODE_AF_PP;
}
void PintableBasicImpl::setModeAnalog() {
	mode = GPIO_MODE_ANALOG;
}
void PintableBasicImpl::setModeExternalEventWithDoubleEdgeDetector() {
	mode = GPIO_MODE_EVT_RISING_FALLING;
}
void PintableBasicImpl::setModeExternalEventWithFallingEdgeDetector() {
	mode = GPIO_MODE_EVT_FALLING;
}
void PintableBasicImpl::setModeExternalEventWithRisingEdgeDetector() {
	mode = GPIO_MODE_EVT_RISING;
}
void PintableBasicImpl::setModeExternalInterruptWithRisingEdgeDetector() {
	mode = GPIO_MODE_IT_RISING;
}
void PintableBasicImpl::setModeExternalInterruptWithFallingEdgeDetector() {
	mode = GPIO_MODE_IT_FALLING;
}
void PintableBasicImpl::setModeExternalInterruptWithDoubleEdgeDetector() {
	mode = GPIO_MODE_IT_RISING_FALLING;
}
PintableBasicImpl::gpio_af_t PintableBasicImpl::getRawAF() const {
	return alternate_function;
}
PintableBasicImpl::gpio_mode_t PintableBasicImpl::getRawMode() const {
	return mode;
}
PintableBasicImpl::gpio_resistor_t PintableBasicImpl::getRawResistor() const {
	return resistor;
}
PintableBasicImpl::gpio_speed_t PintableBasicImpl::getRawSpeed() const {
	return speed;
}

void PintableBasicImpl::setDisableAF() {
	setAF0();
}

bool PintableBasicImpl::init() {
	if(sync_obj == nullptr || bank == nullptr){
		return false;
	}
	if(!sync_obj->getResource((void*)(this))){
		return false;
	}
	bank->init((this));
	return true;
}

bool PintableBasicImpl::deinit() {
	if(sync_obj == nullptr || bank == nullptr){
		return false;
	}
	if(!sync_obj->releaseResource((void*)(this))){
		return false;
	}
	bank->de_init(this);
	return true;
}

void PintableBasicImpl::writePositive() {
	if(bank == nullptr){
		return;
	}

	HAL_GPIO_WritePin(bank->getRawBank(), pin, GPIO_PIN_SET);
}

void PintableBasicImpl::writeNegative() {
	if(bank == nullptr){
		return;
	}
	HAL_GPIO_WritePin(bank->getRawBank(), pin, GPIO_PIN_RESET);
}

std::experimental::optional<bool> PintableBasicImpl::read() {
	if(bank == nullptr){
		return {};
	}
	return HAL_GPIO_ReadPin(bank->getRawBank(), pin)==GPIO_PIN_SET;
}

void PintableBasicImpl::resetAllThis() {
	alternate_function = reset_alternate_function;
	speed = reset_speed;
	resistor = reset_resistor;
	mode = reset_mode;
}
