//
// Created by TobiEgger on 13.02.2020.
//

#ifndef DRONE_PINTABLEBASICIMPL_H
#define DRONE_PINTABLEBASICIMPL_H

#include <memory>
#include "Pintable.h"
#include "../BankRelated/GPIOBank.h"
#include "../../../../Common/LentiaBase/SynchronizationObject.h"

class PintableBasicImpl : public Pintable {
public:
	virtual ~PintableBasicImpl() = default;

	void setDisableAF() override;
	void setAF0() override;
	void setAF1() override;
	void setAF2() override;
	void setAF3() override;

	void setAF4() override;
	void setAF5() override;
	void setAF6() override;
	void setAF7() override;

	void setAF8() override;
	void setAF9() override;
	void setAF10() override;
	void setAF11() override;

	void setAF12() override;
	void setAF13() override;
	void setAF14() override;
	void setAF15() override;

	//Speed
	void setSpeedSlow() override;
	void setSpeedMedium() override;
	void setSpeedFast() override;

//Resistors
	void setPullUp() override;
	void setPullNone() override;
	void setPullDown() override;

//Modes
	void setModeInput() override;
	void setModeOutputPushPull() override;
	void setModeOutputOpenDrain() override;
	void setModeAlternateFunctionPushPull() override;
	void setModeAlternateFunctionOpenDrain() override;
	void setModeAnalog() override;
	void setModeExternalInterruptWithRisingEdgeDetector() override;
	void setModeExternalInterruptWithFallingEdgeDetector() override;
	void setModeExternalInterruptWithDoubleEdgeDetector() override;
	void setModeExternalEventWithRisingEdgeDetector() override;
	void setModeExternalEventWithFallingEdgeDetector() override;
	void setModeExternalEventWithDoubleEdgeDetector() override;

	gpio_pin_t getRawPin() const override;
	gpio_bank_t getRawBank() const override;
	gpio_af_t getRawAF() const override;
	gpio_speed_t getRawSpeed() const override;
	gpio_resistor_t getRawResistor() const override;
	gpio_mode_t getRawMode() const override;

	bool init() override;
	bool deinit() override;

	void writePositive() override;
	void writeNegative() override ;

	std::experimental::optional<bool> read() override;
protected:
	const gpio_pin_t pin;
	GPIOBank* bank = nullptr;
	SynchronizationObject* sync_obj = nullptr;

	static const gpio_af_t reset_alternate_function = 0;
	static const gpio_speed_t reset_speed = GPIO_SPEED_FREQ_HIGH;
	static const gpio_resistor_t reset_resistor = GPIO_PULLDOWN;
	static const gpio_mode_t reset_mode = GPIO_MODE_OUTPUT_PP;

	gpio_af_t alternate_function = reset_alternate_function;
	gpio_speed_t speed = reset_speed;
	gpio_resistor_t resistor = reset_resistor;
	gpio_mode_t mode = reset_mode;

	void resetAllThis();

	PintableBasicImpl(
			const gpio_pin_t _pin,
			GPIOBank * _bank,
			SynchronizationObject* _sync_obj)
			: pin(_pin), bank(_bank), sync_obj(_sync_obj){};
	PintableBasicImpl(const PintableBasicImpl & _pin) : pin(_pin.pin), bank(_pin.bank), sync_obj(_pin.sync_obj){
		resetAllThis();
	}
};


#endif //DRONE_PINTABLEBASICIMPL_H
