//
// Created by TobiEgger on 15.02.2020.
//

#ifndef DRONE_GPIOBANKBASICIMPL_H
#define DRONE_GPIOBANKBASICIMPL_H

#include "GPIOBank.h"
#include <stm32f3xx_hal_gpio.h>

class GPIOBankBasicImpl : public GPIOBank{
protected:
	GPIO_InitTypeDef gpio_bank_instance = {};
	gpio_bank_t bank;
	//When 0, no Pins are used and Clock can be safely turned of
	uint32_t counter = 0;

	explicit GPIOBankBasicImpl(gpio_bank_t _bank) : bank(_bank){};

	virtual bool setStructure(Pintable * pin);
public:
	~GPIOBankBasicImpl() override = default;

	bool enableClockOverride() override;
	bool disableClockOverride() override;

	bool init(Pintable * pin) override;
	bool de_init(Pintable * pin) override;

	gpio_bank_t getRawBank() const override;
};


#endif //DRONE_GPIOBANKBASICIMPL_H
