//
// Created by TobiEgger on 15.02.2020.
//

#include "GPIOBankBasicImpl.h"

bool GPIOBankBasicImpl::enableClockOverride() {
#warning "needs to be overwritten"
	return false;
}

bool GPIOBankBasicImpl::disableClockOverride() {
#warning "needs to be overwritten"
	return false;
}

bool GPIOBankBasicImpl::init(Pintable * pin) {
	if(!setStructure(pin) || bank == nullptr || bank != pin->getRawBank()){
		return false;
	}
	if(!counter){
		enableClockOverride();
	}
	//else init
	HAL_GPIO_Init(bank, &gpio_bank_instance);
	counter++;
	return true;
}

bool GPIOBankBasicImpl::de_init(Pintable * pin) {
	if(!setStructure(pin) || bank == nullptr || bank != pin->getRawBank()){
		return false;
	}
	counter--;
	if(counter == 0){
		disableClockOverride();
	}
	HAL_GPIO_DeInit(bank, gpio_bank_instance.Pin);
	return true;
}

GPIOBank::gpio_bank_t GPIOBankBasicImpl::getRawBank() const {
	return bank;
}

bool GPIOBankBasicImpl::setStructure(Pintable * pin) {
	if(pin == nullptr || bank == nullptr || bank != pin->getRawBank()){
		return false;
	}
	gpio_bank_instance.Mode = pin->getRawMode();
	gpio_bank_instance.Alternate = pin->getRawAF();
	gpio_bank_instance.Pin = pin->getRawPin();
	gpio_bank_instance.Pull = pin->getRawResistor();
	gpio_bank_instance.Speed = pin->getRawSpeed();
	return true;
}
