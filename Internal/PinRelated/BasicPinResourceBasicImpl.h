//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_BASICPINRESOURCEBASICIMPL_H
#define DRONE_BASICPINRESOURCEBASICIMPL_H

#include "BasicPinResource.h"

class BasicPinResourceBasicImpl : public BasicPinResource {
protected:
	pin_t pin;
	gpio_bank_t bank;
	BasicPinResourceBasicImpl(pin_t _pin, gpio_bank_t _bank) : pin(_pin), bank(_bank) {};
public:
	~BasicPinResourceBasicImpl() override = 0;

	pin_t getPin() const override;
	gpio_bank_t getBank() const override;
};


#endif //DRONE_BASICPINRESOURCEBASICIMPL_H
