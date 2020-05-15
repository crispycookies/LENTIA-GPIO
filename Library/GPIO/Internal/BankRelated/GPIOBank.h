//
// Created by TobiEgger on 14.02.2020.
//

#ifndef DRONE_GPIOBANK_H
#define DRONE_GPIOBANK_H

#include "../../../../Common/LentiaBase/Object.h"
#include "../../../../Common/CPP/optional.h"
#include "../PinRelated/Pintable.h"
#include <memory>

class GPIOBank : public Object{
protected:
	GPIOBank()= default;
public:
	typedef GPIO_TypeDef*  gpio_bank_t;
	~GPIOBank() override = default;

	virtual bool enableClockOverride() = 0;
	virtual bool disableClockOverride() = 0;

	virtual gpio_bank_t getRawBank() const= 0;

	virtual bool init(Pintable * pin) = 0;
	virtual bool de_init(Pintable * pin) = 0;
};

#endif //DRONE_GPIOBANK_H
