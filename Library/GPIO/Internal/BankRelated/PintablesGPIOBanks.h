//
// Created by TobiEgger on 15.02.2020.
//

#ifndef DRONE_PINTABLESGPIOBANKS_H
#define DRONE_PINTABLESGPIOBANKS_H

#include "../PinRelated/Pintable.h"
#include "../../Pins.h"
#include "../../../../Common/LentiaBase/TablesObjectBasicImpl.h"

#ifdef STM32F303xE

class Pintable_GPIOA : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOA() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PA0::getInstance()),
							  &(PA1::getInstance()),
							  &(PA2::getInstance()),
							  &(PA3::getInstance()),

							  &(PA4::getInstance()),
							  &(PA5::getInstance()),
							  &(PA6::getInstance()),
							  &(PA7::getInstance()),

							  &(PA8::getInstance()),
							  &(PA9::getInstance()),
							  &(PA10::getInstance()),
							  &(PA11::getInstance()),

							  &(PA12::getInstance()),
							  &(PA13::getInstance()),
							  &(PA14::getInstance()),
							  &(PA15::getInstance()),
					  }
			),
			"GPIOA_Pins"
	){};

public:
	~ Pintable_GPIOA() override = default;
	static inline Pintable_GPIOA & getInstance(){
		static Pintable_GPIOA pintable;
		return pintable;
	}
};

class Pintable_GPIOB : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOB() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PB0::getInstance()),
							  &(PB1::getInstance()),
							  &(PB2::getInstance()),
							  &(PB3::getInstance()),

							  &(PB4::getInstance()),
							  &(PB5::getInstance()),
							  &(PB6::getInstance()),
							  &(PB7::getInstance()),

							  &(PB8::getInstance()),
							  &(PB9::getInstance()),
							  &(PB10::getInstance()),
							  &(PB11::getInstance()),

							  &(PB12::getInstance()),
							  &(PB13::getInstance()),
							  &(PB14::getInstance()),
							  &(PB15::getInstance()),
					  }
			),
			"GPIOB_Pins"
	){};

public:
	~ Pintable_GPIOB() override = default;
	static inline Pintable_GPIOB & getInstance(){
		static Pintable_GPIOB pintable;
		return pintable;
	}
};
class Pintable_GPIOC : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOC() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PC0::getInstance()),
							  &(PC1::getInstance()),
							  &(PC2::getInstance()),
							  &(PC3::getInstance()),

							  &(PC4::getInstance()),
							  &(PC5::getInstance()),
							  &(PC6::getInstance()),
							  &(PC7::getInstance()),

							  &(PC8::getInstance()),
							  &(PC9::getInstance()),
							  &(PC10::getInstance()),
							  &(PC11::getInstance()),

							  &(PC12::getInstance()),
							  &(PC13::getInstance()),
							  &(PC14::getInstance()),
							  &(PC15::getInstance()),
					  }
			),
			"GPIOC_Pins"
	){};

public:
	~ Pintable_GPIOC() override = default;
	static inline Pintable_GPIOC & getInstance(){
		static Pintable_GPIOC pintable;
		return pintable;
	}
};

class Pintable_GPIOD : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOD() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PD0::getInstance()),
							  &(PD1::getInstance()),
							  &(PD2::getInstance()),
							  &(PD3::getInstance()),

							  &(PD4::getInstance()),
							  &(PD5::getInstance()),
							  &(PD6::getInstance()),
							  &(PD7::getInstance()),

							  &(PD8::getInstance()),
							  &(PD9::getInstance()),
							  &(PD10::getInstance()),
							  &(PD11::getInstance()),

							  &(PD12::getInstance()),
							  &(PD13::getInstance()),
							  &(PD14::getInstance()),
							  &(PD15::getInstance()),
					  }
			),
			"GPIOD_Pins"
	){};

public:
	~ Pintable_GPIOD() override = default;
	static inline Pintable_GPIOD & getInstance(){
		static Pintable_GPIOD pintable;
		return pintable;
	}
};

class Pintable_GPIOE : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOE() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PE0::getInstance()),
							  &(PE1::getInstance()),
							  &(PE2::getInstance()),
							  &(PE3::getInstance()),

							  &(PE4::getInstance()),
							  &(PE5::getInstance()),
							  &(PE6::getInstance()),
							  &(PE7::getInstance()),

							  &(PE8::getInstance()),
							  &(PE9::getInstance()),
							  &(PE10::getInstance()),
							  &(PE11::getInstance()),

							  &(PE12::getInstance()),
							  &(PE13::getInstance()),
							  &(PE14::getInstance()),
							  &(PE15::getInstance()),
					  }
			),
			"GPIOE_Pins"
	){};

public:
	~ Pintable_GPIOE() override = default;
	static inline Pintable_GPIOE & getInstance(){
		static Pintable_GPIOE pintable;
		return pintable;
	}
};

class Pintable_GPIOF : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOF() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PF0::getInstance()),
							  &(PF1::getInstance()),
							  &(PF2::getInstance()),
							  &(PF3::getInstance()),

							  &(PF4::getInstance()),
							  &(PF5::getInstance()),
							  &(PF6::getInstance()),
							  &(PF7::getInstance()),

							  &(PF8::getInstance()),
							  &(PF9::getInstance()),
							  &(PF10::getInstance()),
							  &(PF11::getInstance()),

							  &(PF12::getInstance()),
							  &(PF13::getInstance()),
							  &(PF14::getInstance()),
							  &(PF15::getInstance()),
					  }
			),
			"GPIOF_Pins"
	){};

public:
	~ Pintable_GPIOF() override = default;
	static inline Pintable_GPIOF & getInstance(){
		static Pintable_GPIOF pintable;
		return pintable;
	}
};

class Pintable_GPIOG : public TablesObjectBasicImpl<Pintable>{
protected:
	Pintable_GPIOG() : TablesObjectBasicImpl<Pintable>(
			lut_obj_t({
							  &(PG0::getInstance()),
							  &(PG1::getInstance()),
							  &(PG2::getInstance()),
							  &(PG3::getInstance()),

							  &(PG4::getInstance()),
							  &(PG5::getInstance()),
							  &(PG6::getInstance()),
							  &(PG7::getInstance()),

							  &(PG8::getInstance()),
							  &(PG9::getInstance()),
							  &(PG10::getInstance()),
							  &(PG11::getInstance()),

							  &(PG12::getInstance()),
							  &(PG13::getInstance()),
							  &(PG14::getInstance()),
							  &(PG15::getInstance()),
					  }
			),
			"GPIOG_Pins"
	){};

public:
	~ Pintable_GPIOG() override = default;
	static inline Pintable_GPIOG & getInstance(){
		static Pintable_GPIOG pintable;
		return pintable;
	}
};

#endif //STM32F303
#endif //DRONE_PINTABLESGPIOBANKS_H
