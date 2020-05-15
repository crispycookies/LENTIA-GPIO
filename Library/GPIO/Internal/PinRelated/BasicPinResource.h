//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_BASICPINRESOURCE_H
#define DRONE_BASICPINRESOURCE_H

#include <cstdint>
#include "../../../../Common/LentiaBase/Object.h"
#include <stm32f3xx.h>

class BasicPinResource : public Object{
protected:
	BasicPinResource()= default;
public:
	virtual ~BasicPinResource()= default;

	typedef uint32_t pin_t;
	typedef GPIO_TypeDef* const gpio_bank_t;

	virtual pin_t getPin() const = 0;
	virtual gpio_bank_t getBank() const = 0;
};

#endif //DRONE_BASICPINRESOURCE_H
