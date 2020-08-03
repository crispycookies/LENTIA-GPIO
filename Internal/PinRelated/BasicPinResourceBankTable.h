//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_BASICPINRESOURCEBANKTABLE_H
#define DRONE_BASICPINRESOURCEBANKTABLE_H


#include "BasicPinResourceTables.h"
#include "../../../../Common/LentiaBase/TablesObjectBasicImpl.h"

#ifdef STM32F303xE

class BasicPinResource_GPIOA : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOA() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PA0::getInstance()),
							  &(BasicResource_PA1::getInstance()),
							  &(BasicResource_PA2::getInstance()),
							  &(BasicResource_PA3::getInstance()),

							  &(BasicResource_PA4::getInstance()),
							  &(BasicResource_PA5::getInstance()),
							  &(BasicResource_PA6::getInstance()),
							  &(BasicResource_PA7::getInstance()),

							  &(BasicResource_PA8::getInstance()),
							  &(BasicResource_PA9::getInstance()),
							  &(BasicResource_PA10::getInstance()),
							  &(BasicResource_PA11::getInstance()),

							  &(BasicResource_PA12::getInstance()),
							  &(BasicResource_PA13::getInstance()),
							  &(BasicResource_PA14::getInstance()),
							  &(BasicResource_PA15::getInstance()),
					  }
			),
			"GPIOA_Pins"
	){};

public:
	~ BasicPinResource_GPIOA() override = default;
	static inline BasicPinResource_GPIOA & getInstance(){
		static BasicPinResource_GPIOA BasicPinResource;
		return BasicPinResource;
	}
};

class BasicPinResource_GPIOB : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOB() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PB0::getInstance()),
							  &(BasicResource_PB1::getInstance()),
							  &(BasicResource_PB2::getInstance()),
							  &(BasicResource_PB3::getInstance()),

							  &(BasicResource_PB4::getInstance()),
							  &(BasicResource_PB5::getInstance()),
							  &(BasicResource_PB6::getInstance()),
							  &(BasicResource_PB7::getInstance()),

							  &(BasicResource_PB8::getInstance()),
							  &(BasicResource_PB9::getInstance()),
							  &(BasicResource_PB10::getInstance()),
							  &(BasicResource_PB11::getInstance()),

							  &(BasicResource_PB12::getInstance()),
							  &(BasicResource_PB13::getInstance()),
							  &(BasicResource_PB14::getInstance()),
							  &(BasicResource_PB15::getInstance()),
					  }
			),
			"GPIOB_Pins"
	){};

public:
	~ BasicPinResource_GPIOB() override = default;
	static inline BasicPinResource_GPIOB & getInstance(){
		static BasicPinResource_GPIOB BasicPinResource;
		return BasicPinResource;
	}
};
class BasicPinResource_GPIOC : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOC() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PC0::getInstance()),
							  &(BasicResource_PC1::getInstance()),
							  &(BasicResource_PC2::getInstance()),
							  &(BasicResource_PC3::getInstance()),

							  &(BasicResource_PC4::getInstance()),
							  &(BasicResource_PC5::getInstance()),
							  &(BasicResource_PC6::getInstance()),
							  &(BasicResource_PC7::getInstance()),

							  &(BasicResource_PC8::getInstance()),
							  &(BasicResource_PC9::getInstance()),
							  &(BasicResource_PC10::getInstance()),
							  &(BasicResource_PC11::getInstance()),

							  &(BasicResource_PC12::getInstance()),
							  &(BasicResource_PC13::getInstance()),
							  &(BasicResource_PC14::getInstance()),
							  &(BasicResource_PC15::getInstance()),
					  }
			),
			"GPIOC_Pins"
	){};

public:
	~ BasicPinResource_GPIOC() override = default;
	static inline BasicPinResource_GPIOC & getInstance(){
		static BasicPinResource_GPIOC BasicPinResource;
		return BasicPinResource;
	}
};

class BasicPinResource_GPIOD : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOD() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PD0::getInstance()),
							  &(BasicResource_PD1::getInstance()),
							  &(BasicResource_PD2::getInstance()),
							  &(BasicResource_PD3::getInstance()),

							  &(BasicResource_PD4::getInstance()),
							  &(BasicResource_PD5::getInstance()),
							  &(BasicResource_PD6::getInstance()),
							  &(BasicResource_PD7::getInstance()),

							  &(BasicResource_PD8::getInstance()),
							  &(BasicResource_PD9::getInstance()),
							  &(BasicResource_PD10::getInstance()),
							  &(BasicResource_PD11::getInstance()),

							  &(BasicResource_PD12::getInstance()),
							  &(BasicResource_PD13::getInstance()),
							  &(BasicResource_PD14::getInstance()),
							  &(BasicResource_PD15::getInstance()),
					  }
			),
			"GPIOD_Pins"
	){};

public:
	~ BasicPinResource_GPIOD() override = default;
	static inline BasicPinResource_GPIOD & getInstance(){
		static BasicPinResource_GPIOD BasicPinResource;
		return BasicPinResource;
	}
};

class BasicPinResource_GPIOE : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOE() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PE0::getInstance()),
							  &(BasicResource_PE1::getInstance()),
							  &(BasicResource_PE2::getInstance()),
							  &(BasicResource_PE3::getInstance()),

							  &(BasicResource_PE4::getInstance()),
							  &(BasicResource_PE5::getInstance()),
							  &(BasicResource_PE6::getInstance()),
							  &(BasicResource_PE7::getInstance()),

							  &(BasicResource_PE8::getInstance()),
							  &(BasicResource_PE9::getInstance()),
							  &(BasicResource_PE10::getInstance()),
							  &(BasicResource_PE11::getInstance()),

							  &(BasicResource_PE12::getInstance()),
							  &(BasicResource_PE13::getInstance()),
							  &(BasicResource_PE14::getInstance()),
							  &(BasicResource_PE15::getInstance()),
					  }
			),
			"GPIOE_Pins"
	){};

public:
	~ BasicPinResource_GPIOE() override = default;
	static inline BasicPinResource_GPIOE & getInstance(){
		static BasicPinResource_GPIOE BasicPinResource;
		return BasicPinResource;
	}
};

class BasicPinResource_GPIOF : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOF() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PF0::getInstance()),
							  &(BasicResource_PF1::getInstance()),
							  &(BasicResource_PF2::getInstance()),
							  &(BasicResource_PF3::getInstance()),

							  &(BasicResource_PF4::getInstance()),
							  &(BasicResource_PF5::getInstance()),
							  &(BasicResource_PF6::getInstance()),
							  &(BasicResource_PF7::getInstance()),

							  &(BasicResource_PF8::getInstance()),
							  &(BasicResource_PF9::getInstance()),
							  &(BasicResource_PF10::getInstance()),
							  &(BasicResource_PF11::getInstance()),

							  &(BasicResource_PF12::getInstance()),
							  &(BasicResource_PF13::getInstance()),
							  &(BasicResource_PF14::getInstance()),
							  &(BasicResource_PF15::getInstance()),
					  }
			),
			"GPIOF_Pins"
	){};

public:
	~ BasicPinResource_GPIOF() override = default;
	static inline BasicPinResource_GPIOF & getInstance(){
		static BasicPinResource_GPIOF BasicPinResource;
		return BasicPinResource;
	}
};

class BasicPinResource_GPIOG : public TablesObjectBasicImpl<BasicPinResource>{
protected:
	BasicPinResource_GPIOG() : TablesObjectBasicImpl<BasicPinResource>(
			lut_obj_t({
							  &(BasicResource_PG0::getInstance()),
							  &(BasicResource_PG1::getInstance()),
							  &(BasicResource_PG2::getInstance()),
							  &(BasicResource_PG3::getInstance()),

							  &(BasicResource_PG4::getInstance()),
							  &(BasicResource_PG5::getInstance()),
							  &(BasicResource_PG6::getInstance()),
							  &(BasicResource_PG7::getInstance()),

							  &(BasicResource_PG8::getInstance()),
							  &(BasicResource_PG9::getInstance()),
							  &(BasicResource_PG10::getInstance()),
							  &(BasicResource_PG11::getInstance()),

							  &(BasicResource_PG12::getInstance()),
							  &(BasicResource_PG13::getInstance()),
							  &(BasicResource_PG14::getInstance()),
							  &(BasicResource_PG15::getInstance()),
					  }
			),
			"GPIOG_Pins"
	){};

public:
	~ BasicPinResource_GPIOG() override = default;
	static inline BasicPinResource_GPIOG & getInstance(){
		static BasicPinResource_GPIOG BasicPinResource;
		return BasicPinResource;
	}
};

#endif //STM32F303

#endif //DRONE_BASICPINRESOURCEBANKTABLE_H
