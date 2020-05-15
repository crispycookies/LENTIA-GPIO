#ifndef DRONE_PINS_H
#define DRONE_PINS_H

#include "Banks.h"
#include "Internal/PinRelated/PintableBasicImpl.h"
#include "Internal/PinRelated/PinSynchronizationObjects.h"

#if defined(PINS64) || defined(PINS48) || defined(PINS32)
class PA0: public PintableBasicImpl{
protected:
	PA0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankA::getInstance(),
			&__SYNCH_PA0::getInstance()){};
public:
	PA0(const PA0 & pa) = default;
	static inline PA0 & getInstance(){
		static PA0 pa;
		return pa;
	}
	~PA0() final= default;
};
class PA1: public PintableBasicImpl{
protected:
	PA1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA1::getInstance()){};
public:
	PA1(const PA1 & pa) = default;
	static inline PA1 & getInstance(){
		static PA1 pa;
		return pa;
	}
	~PA1() final= default;
};
class PA2: public PintableBasicImpl{
protected:
	PA2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA2::getInstance()){};
public:
	PA2(const PA2 & pa) = default;
	static inline PA2 & getInstance(){
		static PA2 pa;
		return pa;
	}
	~PA2() final= default;
};
class PA3: public PintableBasicImpl{
protected:
	PA3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA3::getInstance()){};
public:
	PA3(const PA3 & pa) = default;
	static inline PA3 & getInstance(){
		static PA3 pa;
		return pa;
	}
	~PA3() final= default;
};

class PA4: public PintableBasicImpl{
protected:
	PA4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA4::getInstance()){};
public:
	PA4(const PA4 & pa) = default;
	static inline PA4 & getInstance(){
		static PA4 pa;
		return pa;
	}
	~PA4() final= default;
};
class PA5: public PintableBasicImpl{
protected:
	PA5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA5::getInstance()){};
public:
	PA5(const PA5 & pa) = default;
	static inline PA5 & getInstance(){
		static PA5 pa;
		return pa;
	}
	~PA5() final= default;
};
class PA6: public PintableBasicImpl{
protected:
	PA6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA6::getInstance()){};
public:
	PA6(const PA6 & pa) = default;
	static inline PA6 & getInstance(){
		static PA6 pa;
		return pa;
	}
	~PA6() final= default;
};
class PA7: public PintableBasicImpl{
protected:
	PA7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA7::getInstance()){};
public:
	PA7(const PA7 & pa) = default;
	static inline PA7 & getInstance(){
		static PA7 pa;
		return pa;
	}
	~PA7() final= default;
};


class PA8: public PintableBasicImpl{
protected:
	PA8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA8::getInstance()){};
public:
	PA8(const PA8 & pa) = default;
	static inline PA8 & getInstance(){
		static PA8 pa;
		return pa;
	}
	~PA8() final= default;
};
class PA9: public PintableBasicImpl{
protected:
	PA9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankA::getInstance(),
							  &__SYNCH_PA9::getInstance()){};
public:
	PA9(const PA9 & pa) = default;
	static inline PA9 & getInstance(){
		static PA9 pa;
		return pa;
	}
	~PA9() final= default;
};
class PA10: public PintableBasicImpl{
protected:
	PA10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankA::getInstance(),
							   &__SYNCH_PA10::getInstance()){};
public:
	PA10(const PA10 & pa) = default;
	static inline PA10 & getInstance(){
		static PA10 pa;
		return pa;
	}
	~PA10() final= default;
};
class PA11: public PintableBasicImpl{
protected:
	PA11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankA::getInstance(),
							   &__SYNCH_PA11::getInstance()){};
public:
	PA11(const PA11 & pa) = default;
	static inline PA11 & getInstance(){
		static PA11 pa;
		return pa;
	}
	~PA11() final= default;
};

class PA12: public PintableBasicImpl{
protected:
	PA12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankA::getInstance(),
							   &__SYNCH_PA11::getInstance()){};
public:
	PA12(const PA12 & pa) = default;
	static inline PA12 & getInstance(){
		static PA12 pa;
		return pa;
	}
	~PA12() final= default;
};
class PA13: public PintableBasicImpl{
protected:
	PA13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankA::getInstance(),
							   &__SYNCH_PA13::getInstance()){};
public:
	PA13(const PA13 & pa) = default;
	static inline PA13 & getInstance(){
		static PA13 pa;
		return pa;
	}
	~PA13() final= default;
};
class PA14: public PintableBasicImpl{
protected:
	PA14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankA::getInstance(),
							   &__SYNCH_PA14::getInstance()){};
public:
	PA14(const PA14 & pa) = default;
	static inline PA14 & getInstance(){
		static PA14 pa;
		return pa;
	}
	~PA14() final= default;
};
class PA15: public PintableBasicImpl{
protected:
	PA15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankA::getInstance(),
							   &__SYNCH_PA15::getInstance()){};
public:
	PA15(const PA15 & pa) = default;
	static inline PA15 & getInstance(){
		static PA15 pa;
		return pa;
	}
	~PA15() final= default;
};

class PB0: public PintableBasicImpl{
protected:
	PB0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankB::getInstance(),
			&__SYNCH_PB0::getInstance()){};
public:
	PB0(const PB0 & PB) = default;
	static inline PB0 & getInstance(){
		static PB0 PB;
		return PB;
	}
	~PB0() final= default;
};
class PB1: public PintableBasicImpl{
protected:
	PB1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB1::getInstance()){};
public:
	PB1(const PB1 & PB) = default;
	static inline PB1 & getInstance(){
		static PB1 PB;
		return PB;
	}
	~PB1() final= default;
};
class PB2: public PintableBasicImpl{
protected:
	PB2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB2::getInstance()){};
public:
	PB2(const PB2 & PB) = default;
	static inline PB2 & getInstance(){
		static PB2 PB;
		return PB;
	}
	~PB2() final= default;
};
class PB3: public PintableBasicImpl{
protected:
	PB3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB3::getInstance()){};
public:
	PB3(const PB3 & PB) = default;
	static inline PB3 & getInstance(){
		static PB3 PB;
		return PB;
	}
	~PB3() final= default;
};

class PB4: public PintableBasicImpl{
protected:
	PB4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB4::getInstance()){};
public:
	PB4(const PB4 & PB) = default;
	static inline PB4 & getInstance(){
		static PB4 PB;
		return PB;
	}
	~PB4() final= default;
};
class PB5: public PintableBasicImpl{
protected:
	PB5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB5::getInstance()){};
public:
	PB5(const PB5 & PB) = default;
	static inline PB5 & getInstance(){
		static PB5 PB;
		return PB;
	}
	~PB5() final= default;
};
class PB6: public PintableBasicImpl{
protected:
	PB6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB6::getInstance()){};
public:
	PB6(const PB6 & PB) = default;
	static inline PB6 & getInstance(){
		static PB6 PB;
		return PB;
	}
	~PB6() final= default;
};
class PB7: public PintableBasicImpl{
protected:
	PB7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB7::getInstance()){};
public:
	PB7(const PB7 & PB) = default;
	static inline PB7 & getInstance(){
		static PB7 PB;
		return PB;
	}
	~PB7() final= default;
};


class PB8: public PintableBasicImpl{
protected:
	PB8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB8::getInstance()){};
public:
	PB8(const PB8 & PB) = default;
	static inline PB8 & getInstance(){
		static PB8 PB;
		return PB;
	}
	~PB8() final= default;
};
class PB9: public PintableBasicImpl{
protected:
	PB9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankB::getInstance(),
							  &__SYNCH_PB9::getInstance()){};
public:
	PB9(const PB9 & PB) = default;
	static inline PB9 & getInstance(){
		static PB9 PB;
		return PB;
	}
	~PB9() final= default;
};
class PB10: public PintableBasicImpl{
protected:
	PB10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankB::getInstance(),
							   &__SYNCH_PB10::getInstance()){};
public:
	PB10(const PB10 & PB) = default;
	static inline PB10 & getInstance(){
		static PB10 PB;
		return PB;
	}
	~PB10() final= default;
};
class PB11: public PintableBasicImpl{
protected:
	PB11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankB::getInstance(),
							   &__SYNCH_PB11::getInstance()){};
public:
	PB11(const PB11 & PB) = default;
	static inline PB11 & getInstance(){
		static PB11 PB;
		return PB;
	}
	~PB11() final= default;
};

class PB12: public PintableBasicImpl{
protected:
	PB12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankB::getInstance(),
							   &__SYNCH_PB11::getInstance()){};
public:
	PB12(const PB12 & PB) = default;
	static inline PB12 & getInstance(){
		static PB12 PB;
		return PB;
	}
	~PB12() final= default;
};
class PB13: public PintableBasicImpl{
protected:
	PB13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankB::getInstance(),
							   &__SYNCH_PB13::getInstance()){};
public:
	PB13(const PB13 & PB) = default;
	static inline PB13 & getInstance(){
		static PB13 PB;
		return PB;
	}
	~PB13() final= default;
};
class PB14: public PintableBasicImpl{
protected:
	PB14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankB::getInstance(),
							   &__SYNCH_PB14::getInstance()){};
public:
	PB14(const PB14 & PB) = default;
	static inline PB14 & getInstance(){
		static PB14 PB;
		return PB;
	}
	~PB14() final= default;
};
class PB15: public PintableBasicImpl{
protected:
	PB15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankB::getInstance(),
							   &__SYNCH_PB15::getInstance()){};
public:
	PB15(const PB15 & PB) = default;
	static inline PB15 & getInstance(){
		static PB15 PB;
		return PB;
	}
	~PB15() final= default;
};

#endif

#if defined(PINS64) || defined(PINS48)

class PC0: public PintableBasicImpl{
protected:
	PC0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankC::getInstance(),
			&__SYNCH_PC0::getInstance()){};
public:
	PC0(const PC0 & PC) = default;
	static inline PC0 & getInstance(){
		static PC0 PC;
		return PC;
	}
	~PC0() final= default;
};
class PC1: public PintableBasicImpl{
protected:
	PC1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC1::getInstance()){};
public:
	PC1(const PC1 & PC) = default;
	static inline PC1 & getInstance(){
		static PC1 PC;
		return PC;
	}
	~PC1() final= default;
};
class PC2: public PintableBasicImpl{
protected:
	PC2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC2::getInstance()){};
public:
	PC2(const PC2 & PC) = default;
	static inline PC2 & getInstance(){
		static PC2 PC;
		return PC;
	}
	~PC2() final= default;
};
class PC3: public PintableBasicImpl{
protected:
	PC3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC3::getInstance()){};
public:
	PC3(const PC3 & PC) = default;
	static inline PC3 & getInstance(){
		static PC3 PC;
		return PC;
	}
	~PC3() final= default;
};

class PC4: public PintableBasicImpl{
protected:
	PC4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC4::getInstance()){};
public:
	PC4(const PC4 & PC) = default;
	static inline PC4 & getInstance(){
		static PC4 PC;
		return PC;
	}
	~PC4() final= default;
};
class PC5: public PintableBasicImpl{
protected:
	PC5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC5::getInstance()){};
public:
	PC5(const PC5 & PC) = default;
	static inline PC5 & getInstance(){
		static PC5 PC;
		return PC;
	}
	~PC5() final= default;
};
class PC6: public PintableBasicImpl{
protected:
	PC6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC6::getInstance()){};
public:
	PC6(const PC6 & PC) = default;
	static inline PC6 & getInstance(){
		static PC6 PC;
		return PC;
	}
	~PC6() final= default;
};
class PC7: public PintableBasicImpl{
protected:
	PC7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC7::getInstance()){};
public:
	PC7(const PC7 & PC) = default;
	static inline PC7 & getInstance(){
		static PC7 PC;
		return PC;
	}
	~PC7() final= default;
};


class PC8: public PintableBasicImpl{
protected:
	PC8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC8::getInstance()){};
public:
	PC8(const PC8 & PC) = default;
	static inline PC8 & getInstance(){
		static PC8 PC;
		return PC;
	}
	~PC8() final= default;
};
class PC9: public PintableBasicImpl{
protected:
	PC9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankC::getInstance(),
							  &__SYNCH_PC9::getInstance()){};
public:
	PC9(const PC9 & PC) = default;
	static inline PC9 & getInstance(){
		static PC9 PC;
		return PC;
	}
	~PC9() final= default;
};
class PC10: public PintableBasicImpl{
protected:
	PC10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankC::getInstance(),
							   &__SYNCH_PC10::getInstance()){};
public:
	PC10(const PC10 & PC) = default;
	static inline PC10 & getInstance(){
		static PC10 PC;
		return PC;
	}
	~PC10() final= default;
};
class PC11: public PintableBasicImpl{
protected:
	PC11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankC::getInstance(),
							   &__SYNCH_PC11::getInstance()){};
public:
	PC11(const PC11 & PC) = default;
	static inline PC11 & getInstance(){
		static PC11 PC;
		return PC;
	}
	~PC11() final= default;
};

class PC12: public PintableBasicImpl{
protected:
	PC12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankC::getInstance(),
							   &__SYNCH_PC11::getInstance()){};
public:
	PC12(const PC12 & PC) = default;
	static inline PC12 & getInstance(){
		static PC12 PC;
		return PC;
	}
	~PC12() final= default;
};
class PC13: public PintableBasicImpl{
protected:
	PC13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankC::getInstance(),
							   &__SYNCH_PC13::getInstance()){};
public:
	PC13(const PC13 & PC) = default;
	static inline PC13 & getInstance(){
		static PC13 PC;
		return PC;
	}
	~PC13() final= default;
};
class PC14: public PintableBasicImpl{
protected:
	PC14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankC::getInstance(),
							   &__SYNCH_PC14::getInstance()){};
public:
	PC14(const PC14 & PC) = default;
	static inline PC14 & getInstance(){
		static PC14 PC;
		return PC;
	}
	~PC14() final= default;
};
class PC15: public PintableBasicImpl{
protected:
	PC15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankC::getInstance(),
							   &__SYNCH_PC15::getInstance()){};
public:
	PC15(const PC15 & PC) = default;
	static inline PC15 & getInstance(){
		static PC15 PC;
		return PC;
	}
	~PC15() final= default;
};

#endif

#if defined(PINS64)

class PD0: public PintableBasicImpl{
protected:
	PD0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankD::getInstance(),
			&__SYNCH_PD0::getInstance()){};
public:
	PD0(const PD0 & PD) = default;
	static inline PD0 & getInstance(){
		static PD0 PD;
		return PD;
	}
	~PD0() final= default;
};
class PD1: public PintableBasicImpl{
protected:
	PD1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD1::getInstance()){};
public:
	PD1(const PD1 & PD) = default;
	static inline PD1 & getInstance(){
		static PD1 PD;
		return PD;
	}
	~PD1() final= default;
};
class PD2: public PintableBasicImpl{
protected:
	PD2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD2::getInstance()){};
public:
	PD2(const PD2 & PD) = default;
	static inline PD2 & getInstance(){
		static PD2 PD;
		return PD;
	}
	~PD2() final= default;
};
class PD3: public PintableBasicImpl{
protected:
	PD3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD3::getInstance()){};
public:
	PD3(const PD3 & PD) = default;
	static inline PD3 & getInstance(){
		static PD3 PD;
		return PD;
	}
	~PD3() final= default;
};

class PD4: public PintableBasicImpl{
protected:
	PD4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD4::getInstance()){};
public:
	PD4(const PD4 & PD) = default;
	static inline PD4 & getInstance(){
		static PD4 PD;
		return PD;
	}
	~PD4() final= default;
};
class PD5: public PintableBasicImpl{
protected:
	PD5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD5::getInstance()){};
public:
	PD5(const PD5 & PD) = default;
	static inline PD5 & getInstance(){
		static PD5 PD;
		return PD;
	}
	~PD5() final= default;
};
class PD6: public PintableBasicImpl{
protected:
	PD6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD6::getInstance()){};
public:
	PD6(const PD6 & PD) = default;
	static inline PD6 & getInstance(){
		static PD6 PD;
		return PD;
	}
	~PD6() final= default;
};
class PD7: public PintableBasicImpl{
protected:
	PD7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD7::getInstance()){};
public:
	PD7(const PD7 & PD) = default;
	static inline PD7 & getInstance(){
		static PD7 PD;
		return PD;
	}
	~PD7() final= default;
};


class PD8: public PintableBasicImpl{
protected:
	PD8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD8::getInstance()){};
public:
	PD8(const PD8 & PD) = default;
	static inline PD8 & getInstance(){
		static PD8 PD;
		return PD;
	}
	~PD8() final= default;
};
class PD9: public PintableBasicImpl{
protected:
	PD9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankD::getInstance(),
							  &__SYNCH_PD9::getInstance()){};
public:
	PD9(const PD9 & PD) = default;
	static inline PD9 & getInstance(){
		static PD9 PD;
		return PD;
	}
	~PD9() final= default;
};
class PD10: public PintableBasicImpl{
protected:
	PD10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankD::getInstance(),
							   &__SYNCH_PD10::getInstance()){};
public:
	PD10(const PD10 & PD) = default;
	static inline PD10 & getInstance(){
		static PD10 PD;
		return PD;
	}
	~PD10() final= default;
};
class PD11: public PintableBasicImpl{
protected:
	PD11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankD::getInstance(),
							   &__SYNCH_PD11::getInstance()){};
public:
	PD11(const PD11 & PD) = default;
	static inline PD11 & getInstance(){
		static PD11 PD;
		return PD;
	}
	~PD11() final= default;
};

class PD12: public PintableBasicImpl{
protected:
	PD12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankD::getInstance(),
							   &__SYNCH_PD11::getInstance()){};
public:
	PD12(const PD12 & PD) = default;
	static inline PD12 & getInstance(){
		static PD12 PD;
		return PD;
	}
	~PD12() final= default;
};
class PD13: public PintableBasicImpl{
protected:
	PD13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankD::getInstance(),
							   &__SYNCH_PD13::getInstance()){};
public:
	PD13(const PD13 & PD) = default;
	static inline PD13 & getInstance(){
		static PD13 PD;
		return PD;
	}
	~PD13() final= default;
};
class PD14: public PintableBasicImpl{
protected:
	PD14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankD::getInstance(),
							   &__SYNCH_PD14::getInstance()){};
public:
	PD14(const PD14 & PD) = default;
	static inline PD14 & getInstance(){
		static PD14 PD;
		return PD;
	}
	~PD14() final= default;
};
class PD15: public PintableBasicImpl{
protected:
	PD15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankD::getInstance(),
							   &__SYNCH_PD15::getInstance()){};
public:
	PD15(const PD15 & PD) = default;
	static inline PD15 & getInstance(){
		static PD15 PD;
		return PD;
	}
	~PD15() final= default;
};

class PE0: public PintableBasicImpl{
protected:
	PE0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankE::getInstance(),
			&__SYNCH_PE0::getInstance()){};
public:
	PE0(const PE0 & PE) = default;
	static inline PE0 & getInstance(){
		static PE0 PE;
		return PE;
	}
	~PE0() final= default;
};
class PE1: public PintableBasicImpl{
protected:
	PE1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE1::getInstance()){};
public:
	PE1(const PE1 & PE) = default;
	static inline PE1 & getInstance(){
		static PE1 PE;
		return PE;
	}
	~PE1() final= default;
};
class PE2: public PintableBasicImpl{
protected:
	PE2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE2::getInstance()){};
public:
	PE2(const PE2 & PE) = default;
	static inline PE2 & getInstance(){
		static PE2 PE;
		return PE;
	}
	~PE2() final= default;
};
class PE3: public PintableBasicImpl{
protected:
	PE3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE3::getInstance()){};
public:
	PE3(const PE3 & PE) = default;
	static inline PE3 & getInstance(){
		static PE3 PE;
		return PE;
	}
	~PE3() final= default;
};

class PE4: public PintableBasicImpl{
protected:
	PE4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE4::getInstance()){};
public:
	PE4(const PE4 & PE) = default;
	static inline PE4 & getInstance(){
		static PE4 PE;
		return PE;
	}
	~PE4() final= default;
};
class PE5: public PintableBasicImpl{
protected:
	PE5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE5::getInstance()){};
public:
	PE5(const PE5 & PE) = default;
	static inline PE5 & getInstance(){
		static PE5 PE;
		return PE;
	}
	~PE5() final= default;
};
class PE6: public PintableBasicImpl{
protected:
	PE6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE6::getInstance()){};
public:
	PE6(const PE6 & PE) = default;
	static inline PE6 & getInstance(){
		static PE6 PE;
		return PE;
	}
	~PE6() final= default;
};
class PE7: public PintableBasicImpl{
protected:
	PE7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE7::getInstance()){};
public:
	PE7(const PE7 & PE) = default;
	static inline PE7 & getInstance(){
		static PE7 PE;
		return PE;
	}
	~PE7() final= default;
};


class PE8: public PintableBasicImpl{
protected:
	PE8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE8::getInstance()){};
public:
	PE8(const PE8 & PE) = default;
	static inline PE8 & getInstance(){
		static PE8 PE;
		return PE;
	}
	~PE8() final= default;
};
class PE9: public PintableBasicImpl{
protected:
	PE9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankE::getInstance(),
							  &__SYNCH_PE9::getInstance()){};
public:
	PE9(const PE9 & PE) = default;
	static inline PE9 & getInstance(){
		static PE9 PE;
		return PE;
	}
	~PE9() final= default;
};
class PE10: public PintableBasicImpl{
protected:
	PE10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankE::getInstance(),
							   &__SYNCH_PE10::getInstance()){};
public:
	PE10(const PE10 & PE) = default;
	static inline PE10 & getInstance(){
		static PE10 PE;
		return PE;
	}
	~PE10() final= default;
};
class PE11: public PintableBasicImpl{
protected:
	PE11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankE::getInstance(),
							   &__SYNCH_PE11::getInstance()){};
public:
	PE11(const PE11 & PE) = default;
	static inline PE11 & getInstance(){
		static PE11 PE;
		return PE;
	}
	~PE11() final= default;
};

class PE12: public PintableBasicImpl{
protected:
	PE12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankE::getInstance(),
							   &__SYNCH_PE11::getInstance()){};
public:
	PE12(const PE12 & PE) = default;
	static inline PE12 & getInstance(){
		static PE12 PE;
		return PE;
	}
	~PE12() final= default;
};
class PE13: public PintableBasicImpl{
protected:
	PE13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankE::getInstance(),
							   &__SYNCH_PE13::getInstance()){};
public:
	PE13(const PE13 & PE) = default;
	static inline PE13 & getInstance(){
		static PE13 PE;
		return PE;
	}
	~PE13() final= default;
};
class PE14: public PintableBasicImpl{
protected:
	PE14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankE::getInstance(),
							   &__SYNCH_PE14::getInstance()){};
public:
	PE14(const PE14 & PE) = default;
	static inline PE14 & getInstance(){
		static PE14 PE;
		return PE;
	}
	~PE14() final= default;
};
class PE15: public PintableBasicImpl{
protected:
	PE15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankE::getInstance(),
							   &__SYNCH_PE15::getInstance()){};
public:
	PE15(const PE15 & PE) = default;
	static inline PE15 & getInstance(){
		static PE15 PE;
		return PE;
	}
	~PE15() final= default;
};

class PF0: public PintableBasicImpl{
protected:
	PF0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankF::getInstance(),
			&__SYNCH_PF0::getInstance()){};
public:
	PF0(const PF0 & PF) = default;
	static inline PF0 & getInstance(){
		static PF0 PF;
		return PF;
	}
	~PF0() final= default;
};
class PF1: public PintableBasicImpl{
protected:
	PF1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF1::getInstance()){};
public:
	PF1(const PF1 & PF) = default;
	static inline PF1 & getInstance(){
		static PF1 PF;
		return PF;
	}
	~PF1() final= default;
};
class PF2: public PintableBasicImpl{
protected:
	PF2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF2::getInstance()){};
public:
	PF2(const PF2 & PF) = default;
	static inline PF2 & getInstance(){
		static PF2 PF;
		return PF;
	}
	~PF2() final= default;
};
class PF3: public PintableBasicImpl{
protected:
	PF3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF3::getInstance()){};
public:
	PF3(const PF3 & PF) = default;
	static inline PF3 & getInstance(){
		static PF3 PF;
		return PF;
	}
	~PF3() final= default;
};

class PF4: public PintableBasicImpl{
protected:
	PF4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF4::getInstance()){};
public:
	PF4(const PF4 & PF) = default;
	static inline PF4 & getInstance(){
		static PF4 PF;
		return PF;
	}
	~PF4() final= default;
};
class PF5: public PintableBasicImpl{
protected:
	PF5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF5::getInstance()){};
public:
	PF5(const PF5 & PF) = default;
	static inline PF5 & getInstance(){
		static PF5 PF;
		return PF;
	}
	~PF5() final= default;
};
class PF6: public PintableBasicImpl{
protected:
	PF6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF6::getInstance()){};
public:
	PF6(const PF6 & PF) = default;
	static inline PF6 & getInstance(){
		static PF6 PF;
		return PF;
	}
	~PF6() final= default;
};
class PF7: public PintableBasicImpl{
protected:
	PF7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF7::getInstance()){};
public:
	PF7(const PF7 & PF) = default;
	static inline PF7 & getInstance(){
		static PF7 PF;
		return PF;
	}
	~PF7() final= default;
};


class PF8: public PintableBasicImpl{
protected:
	PF8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF8::getInstance()){};
public:
	PF8(const PF8 & PF) = default;
	static inline PF8 & getInstance(){
		static PF8 PF;
		return PF;
	}
	~PF8() final= default;
};
class PF9: public PintableBasicImpl{
protected:
	PF9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankF::getInstance(),
							  &__SYNCH_PF9::getInstance()){};
public:
	PF9(const PF9 & PF) = default;
	static inline PF9 & getInstance(){
		static PF9 PF;
		return PF;
	}
	~PF9() final= default;
};
class PF10: public PintableBasicImpl{
protected:
	PF10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankF::getInstance(),
							   &__SYNCH_PF10::getInstance()){};
public:
	PF10(const PF10 & PF) = default;
	static inline PF10 & getInstance(){
		static PF10 PF;
		return PF;
	}
	~PF10() final= default;
};
class PF11: public PintableBasicImpl{
protected:
	PF11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankF::getInstance(),
							   &__SYNCH_PF11::getInstance()){};
public:
	PF11(const PF11 & PF) = default;
	static inline PF11 & getInstance(){
		static PF11 PF;
		return PF;
	}
	~PF11() final= default;
};

class PF12: public PintableBasicImpl{
protected:
	PF12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankF::getInstance(),
							   &__SYNCH_PF11::getInstance()){};
public:
	PF12(const PF12 & PF) = default;
	static inline PF12 & getInstance(){
		static PF12 PF;
		return PF;
	}
	~PF12() final= default;
};
class PF13: public PintableBasicImpl{
protected:
	PF13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankF::getInstance(),
							   &__SYNCH_PF13::getInstance()){};
public:
	PF13(const PF13 & PF) = default;
	static inline PF13 & getInstance(){
		static PF13 PF;
		return PF;
	}
	~PF13() final= default;
};
class PF14: public PintableBasicImpl{
protected:
	PF14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankF::getInstance(),
							   &__SYNCH_PF14::getInstance()){};
public:
	PF14(const PF14 & PF) = default;
	static inline PF14 & getInstance(){
		static PF14 PF;
		return PF;
	}
	~PF14() final= default;
};
class PF15: public PintableBasicImpl{
protected:
	PF15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankF::getInstance(),
							   &__SYNCH_PF15::getInstance()){};
public:
	PF15(const PF15 & PF) = default;
	static inline PF15 & getInstance(){
		static PF15 PF;
		return PF;
	}
	~PF15() final= default;
};

class PG0: public PintableBasicImpl{
protected:
	PG0() : PintableBasicImpl(
			GPIO_PIN_0,
			&GPIOBankG::getInstance(),
			&__SYNCH_PG0::getInstance()){};
public:
	PG0(const PG0 & PG) = default;
	static inline PG0 & getInstance(){
		static PG0 PG;
		return PG;
	}
	~PG0() final= default;
};
class PG1: public PintableBasicImpl{
protected:
	PG1() : PintableBasicImpl(GPIO_PIN_1,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG1::getInstance()){};
public:
	PG1(const PG1 & PG) = default;
	static inline PG1 & getInstance(){
		static PG1 PG;
		return PG;
	}
	~PG1() final= default;
};
class PG2: public PintableBasicImpl{
protected:
	PG2() : PintableBasicImpl(GPIO_PIN_2,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG2::getInstance()){};
public:
	PG2(const PG2 & PG) = default;
	static inline PG2 & getInstance(){
		static PG2 PG;
		return PG;
	}
	~PG2() final= default;
};
class PG3: public PintableBasicImpl{
protected:
	PG3() : PintableBasicImpl(GPIO_PIN_3,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG3::getInstance()){};
public:
	PG3(const PG3 & PG) = default;
	static inline PG3 & getInstance(){
		static PG3 PG;
		return PG;
	}
	~PG3() final= default;
};

class PG4: public PintableBasicImpl{
protected:
	PG4() : PintableBasicImpl(GPIO_PIN_4,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG4::getInstance()){};
public:
	PG4(const PG4 & PG) = default;
	static inline PG4 & getInstance(){
		static PG4 PG;
		return PG;
	}
	~PG4() final= default;
};
class PG5: public PintableBasicImpl{
protected:
	PG5() : PintableBasicImpl(GPIO_PIN_5,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG5::getInstance()){};
public:
	PG5(const PG5 & PG) = default;
	static inline PG5 & getInstance(){
		static PG5 PG;
		return PG;
	}
	~PG5() final= default;
};
class PG6: public PintableBasicImpl{
protected:
	PG6() : PintableBasicImpl(GPIO_PIN_6,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG6::getInstance()){};
public:
	PG6(const PG6 & PG) = default;
	static inline PG6 & getInstance(){
		static PG6 PG;
		return PG;
	}
	~PG6() final= default;
};
class PG7: public PintableBasicImpl{
protected:
	PG7() : PintableBasicImpl(GPIO_PIN_7,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG7::getInstance()){};
public:
	PG7(const PG7 & PG) = default;
	static inline PG7 & getInstance(){
		static PG7 PG;
		return PG;
	}
	~PG7() final= default;
};


class PG8: public PintableBasicImpl{
protected:
	PG8() : PintableBasicImpl(GPIO_PIN_8,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG8::getInstance()){};
public:
	PG8(const PG8 & PG) = default;
	static inline PG8 & getInstance(){
		static PG8 PG;
		return PG;
	}
	~PG8() final= default;
};
class PG9: public PintableBasicImpl{
protected:
	PG9() : PintableBasicImpl(GPIO_PIN_9,
							  &GPIOBankG::getInstance(),
							  &__SYNCH_PG9::getInstance()){};
public:
	PG9(const PG9 & PG) = default;
	static inline PG9 & getInstance(){
		static PG9 PG;
		return PG;
	}
	~PG9() final= default;
};
class PG10: public PintableBasicImpl{
protected:
	PG10() : PintableBasicImpl(GPIO_PIN_10,
							   &GPIOBankG::getInstance(),
							   &__SYNCH_PG10::getInstance()){};
public:
	PG10(const PG10 & PG) = default;
	static inline PG10 & getInstance(){
		static PG10 PG;
		return PG;
	}
	~PG10() final= default;
};
class PG11: public PintableBasicImpl{
protected:
	PG11() : PintableBasicImpl(GPIO_PIN_11,
							   &GPIOBankG::getInstance(),
							   &__SYNCH_PG11::getInstance()){};
public:
	PG11(const PG11 & PG) = default;
	static inline PG11 & getInstance(){
		static PG11 PG;
		return PG;
	}
	~PG11() final= default;
};

class PG12: public PintableBasicImpl{
protected:
	PG12() : PintableBasicImpl(GPIO_PIN_12,
							   &GPIOBankG::getInstance(),
							   &__SYNCH_PG11::getInstance()){};
public:
	PG12(const PG12 & PG) = default;
	static inline PG12 & getInstance(){
		static PG12 PG;
		return PG;
	}
	~PG12() final= default;
};
class PG13: public PintableBasicImpl{
protected:
	PG13() : PintableBasicImpl(GPIO_PIN_13,
							   &GPIOBankG::getInstance(),
							   &__SYNCH_PG13::getInstance()){};
public:
	PG13(const PG13 & PG) = default;
	static inline PG13 & getInstance(){
		static PG13 PG;
		return PG;
	}
	~PG13() final= default;
};
class PG14: public PintableBasicImpl{
protected:
	PG14() : PintableBasicImpl(GPIO_PIN_14,
							   &GPIOBankG::getInstance(),
							   &__SYNCH_PG14::getInstance()){};
public:
	PG14(const PG14 & PG) = default;
	static inline PG14 & getInstance(){
		static PG14 PG;
		return PG;
	}
	~PG14() final= default;
};
class PG15: public PintableBasicImpl{
protected:
	PG15() : PintableBasicImpl(GPIO_PIN_15,
							   &GPIOBankG::getInstance(),
							   &__SYNCH_PG15::getInstance()){};
public:
	PG15(const PG15 & PG) = default;
	static inline PG15 & getInstance(){
		static PG15 PG;
		return PG;
	}
	~PG15() final= default;
};
class PH0: public PintableBasicImpl{
protected:
    PH0() : PintableBasicImpl(
            GPIO_PIN_0,
            &GPIOBankH::getInstance(),
            &__SYNCH_PH0::getInstance()){};
public:
    PH0(const PH0 & PH) = default;
    static inline PH0 & getInstance(){
        static PH0 PH;
        return PH;
    }
    ~PH0() final= default;
};
class PH1: public PintableBasicImpl{
protected:
    PH1() : PintableBasicImpl(GPIO_PIN_1,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH1::getInstance()){};
public:
    PH1(const PH1 & PH) = default;
    static inline PH1 & getInstance(){
        static PH1 PH;
        return PH;
    }
    ~PH1() final= default;
};
class PH2: public PintableBasicImpl{
protected:
    PH2() : PintableBasicImpl(GPIO_PIN_2,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH2::getInstance()){};
public:
    PH2(const PH2 & PH) = default;
    static inline PH2 & getInstance(){
        static PH2 PH;
        return PH;
    }
    ~PH2() final= default;
};
class PH3: public PintableBasicImpl{
protected:
    PH3() : PintableBasicImpl(GPIO_PIN_3,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH3::getInstance()){};
public:
    PH3(const PH3 & PH) = default;
    static inline PH3 & getInstance(){
        static PH3 PH;
        return PH;
    }
    ~PH3() final= default;
};

class PH4: public PintableBasicImpl{
protected:
    PH4() : PintableBasicImpl(GPIO_PIN_4,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH4::getInstance()){};
public:
    PH4(const PH4 & PH) = default;
    static inline PH4 & getInstance(){
        static PH4 PH;
        return PH;
    }
    ~PH4() final= default;
};
class PH5: public PintableBasicImpl{
protected:
    PH5() : PintableBasicImpl(GPIO_PIN_5,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH5::getInstance()){};
public:
    PH5(const PH5 & PH) = default;
    static inline PH5 & getInstance(){
        static PH5 PH;
        return PH;
    }
    ~PH5() final= default;
};
class PH6: public PintableBasicImpl{
protected:
    PH6() : PintableBasicImpl(GPIO_PIN_6,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH6::getInstance()){};
public:
    PH6(const PH6 & PH) = default;
    static inline PH6 & getInstance(){
        static PH6 PH;
        return PH;
    }
    ~PH6() final= default;
};
class PH7: public PintableBasicImpl{
protected:
    PH7() : PintableBasicImpl(GPIO_PIN_7,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH7::getInstance()){};
public:
    PH7(const PH7 & PH) = default;
    static inline PH7 & getInstance(){
        static PH7 PH;
        return PH;
    }
    ~PH7() final= default;
};


class PH8: public PintableBasicImpl{
protected:
    PH8() : PintableBasicImpl(GPIO_PIN_8,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH8::getInstance()){};
public:
    PH8(const PH8 & PH) = default;
    static inline PH8 & getInstance(){
        static PH8 PH;
        return PH;
    }
    ~PH8() final= default;
};
class PH9: public PintableBasicImpl{
protected:
    PH9() : PintableBasicImpl(GPIO_PIN_9,
                              &GPIOBankH::getInstance(),
                              &__SYNCH_PH9::getInstance()){};
public:
    PH9(const PH9 & PH) = default;
    static inline PH9 & getInstance(){
        static PH9 PH;
        return PH;
    }
    ~PH9() final= default;
};
class PH10: public PintableBasicImpl{
protected:
    PH10() : PintableBasicImpl(GPIO_PIN_10,
                               &GPIOBankH::getInstance(),
                               &__SYNCH_PH10::getInstance()){};
public:
    PH10(const PH10 & PH) = default;
    static inline PH10 & getInstance(){
        static PH10 PH;
        return PH;
    }
    ~PH10() final= default;
};
class PH11: public PintableBasicImpl{
protected:
    PH11() : PintableBasicImpl(GPIO_PIN_11,
                               &GPIOBankH::getInstance(),
                               &__SYNCH_PH11::getInstance()){};
public:
    PH11(const PH11 & PH) = default;
    static inline PH11 & getInstance(){
        static PH11 PH;
        return PH;
    }
    ~PH11() final= default;
};

class PH12: public PintableBasicImpl{
protected:
    PH12() : PintableBasicImpl(GPIO_PIN_12,
                               &GPIOBankH::getInstance(),
                               &__SYNCH_PH11::getInstance()){};
public:
    PH12(const PH12 & PH) = default;
    static inline PH12 & getInstance(){
        static PH12 PH;
        return PH;
    }
    ~PH12() final= default;
};
class PH13: public PintableBasicImpl{
protected:
    PH13() : PintableBasicImpl(GPIO_PIN_13,
                               &GPIOBankH::getInstance(),
                               &__SYNCH_PH13::getInstance()){};
public:
    PH13(const PH13 & PH) = default;
    static inline PH13 & getInstance(){
        static PH13 PH;
        return PH;
    }
    ~PH13() final= default;
};
class PH14: public PintableBasicImpl{
protected:
    PH14() : PintableBasicImpl(GPIO_PIN_14,
                               &GPIOBankH::getInstance(),
                               &__SYNCH_PH14::getInstance()){};
public:
    PH14(const PH14 & PH) = default;
    static inline PH14 & getInstance(){
        static PH14 PH;
        return PH;
    }
    ~PH14() final= default;
};
class PH15: public PintableBasicImpl{
protected:
    PH15() : PintableBasicImpl(GPIO_PIN_15,
                               &GPIOBankH::getInstance(),
                               &__SYNCH_PH15::getInstance()){};
public:
    PH15(const PH15 & PH) = default;
    static inline PH15 & getInstance(){
        static PH15 PH;
        return PH;
    }
    ~PH15() final= default;
};

#endif

#endif
