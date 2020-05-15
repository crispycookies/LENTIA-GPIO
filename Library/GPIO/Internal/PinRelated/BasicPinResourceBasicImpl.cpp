//
// Created by TobiEgger on 17.02.2020.
//

#include "BasicPinResourceBasicImpl.h"

BasicPinResource::pin_t BasicPinResourceBasicImpl::getPin() const {
	return pin;
}

BasicPinResource::gpio_bank_t BasicPinResourceBasicImpl::getBank() const {
	return bank;
}
