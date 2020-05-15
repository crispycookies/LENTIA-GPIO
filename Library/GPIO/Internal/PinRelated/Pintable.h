//
// Created by TobiEgger on 13.02.2020.
//

#ifndef DRONE_PINTABLE_H
#define DRONE_PINTABLE_H

#include "../../../../Common/LentiaBase/Object.h"
#include "../../../../Common/CPP/optional.h"
#include <cstdint>

class Pintable{
protected:
	Pintable() = default;
public:
	typedef uint32_t gpio_pin_t;
	typedef uint8_t gpio_af_t;
	typedef uint32_t gpio_speed_t;
	typedef uint32_t gpio_resistor_t;
	typedef uint32_t gpio_mode_t;

	typedef GPIO_TypeDef* const gpio_bank_t;
	virtual ~Pintable()= default;

	//AlternateFunctions
	virtual void setDisableAF() = 0;
	virtual void setAF0() = 0;
	virtual void setAF1() = 0;
	virtual void setAF2() = 0;
	virtual void setAF3() = 0;

	virtual void setAF4() = 0;
	virtual void setAF5() = 0;
	virtual void setAF6() = 0;
	virtual void setAF7() = 0;

	virtual void setAF8() = 0;
	virtual void setAF9() = 0;
	virtual void setAF10() = 0;
	virtual void setAF11() = 0;

	virtual void setAF12() = 0;
	virtual void setAF13() = 0;
	virtual void setAF14() = 0;
	virtual void setAF15() = 0;

	//Speed
	virtual void setSpeedSlow() = 0;
	virtual void setSpeedMedium() = 0;
	virtual void setSpeedFast() = 0;

	//Resistors
	virtual void setPullUp() = 0;
	virtual void setPullNone() = 0;
	virtual void setPullDown() = 0;

	//Modes
	virtual void setModeInput() = 0;
	virtual void setModeOutputPushPull() = 0;
	virtual void setModeOutputOpenDrain() = 0;
	virtual void setModeAlternateFunctionPushPull() = 0;
	virtual void setModeAlternateFunctionOpenDrain() = 0;
	virtual void setModeAnalog() = 0;
	virtual void setModeExternalInterruptWithRisingEdgeDetector() = 0;
	virtual void setModeExternalInterruptWithFallingEdgeDetector() = 0;
	virtual void setModeExternalInterruptWithDoubleEdgeDetector() = 0;
	virtual void setModeExternalEventWithRisingEdgeDetector() = 0;
	virtual void setModeExternalEventWithFallingEdgeDetector() = 0;
	virtual void setModeExternalEventWithDoubleEdgeDetector() = 0;

	virtual gpio_pin_t getRawPin() const = 0;
	virtual gpio_bank_t getRawBank() const= 0;
	virtual gpio_af_t getRawAF() const = 0;
	virtual gpio_speed_t getRawSpeed() const = 0;
	virtual gpio_resistor_t getRawResistor() const = 0;
	virtual gpio_mode_t getRawMode() const = 0;

	virtual bool init() = 0;
	virtual bool deinit() = 0;

	virtual void writePositive() = 0;
	virtual void writeNegative() = 0;

	virtual std::experimental::optional<bool> read() = 0;
};

#endif //DRONE_PINTABLE_H
