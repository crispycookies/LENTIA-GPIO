//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_BASICPINRESOURCETABLES_H
#define DRONE_BASICPINRESOURCETABLES_H


#include "BasicPinResourceBasicImpl.h"

#ifdef STM32F303xE
class BasicResource_PA0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOA){};
public:
	static inline BasicResource_PA0 & getInstance(){
		static BasicResource_PA0 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA0() final= default;
};
class BasicResource_PA1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOA){};
public:
	static inline BasicResource_PA1 & getInstance(){
		static BasicResource_PA1 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA1() final= default;
};
class BasicResource_PA2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOA){};
public:
	static inline BasicResource_PA2 & getInstance(){
		static BasicResource_PA2 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA2() final= default;
};
class BasicResource_PA3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOA){};
public:
	static inline BasicResource_PA3 & getInstance(){
		static BasicResource_PA3 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA3() final= default;
};

class BasicResource_PA4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOA){};
public:
	static inline BasicResource_PA4 & getInstance(){
		static BasicResource_PA4 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA4() final= default;
};
class BasicResource_PA5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOA){};
public:
	static inline BasicResource_PA5 & getInstance(){
		static BasicResource_PA5 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA5() final= default;
};
class BasicResource_PA6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOA){};
public:
	static inline BasicResource_PA6 & getInstance(){
		static BasicResource_PA6 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA6() final= default;
};
class BasicResource_PA7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOA){};
public:
	static inline BasicResource_PA7 & getInstance(){
		static BasicResource_PA7 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA7() final= default;
};


class BasicResource_PA8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOA){};
public:
	static inline BasicResource_PA8 & getInstance(){
		static BasicResource_PA8 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA8() final= default;
};
class BasicResource_PA9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOA){};
public:
	static inline BasicResource_PA9 & getInstance(){
		static BasicResource_PA9 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA9() final= default;
};
class BasicResource_PA10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOA){};
public:
	static inline BasicResource_PA10 & getInstance(){
		static BasicResource_PA10 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA10() final= default;
};
class BasicResource_PA11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOA){};
public:
	static inline BasicResource_PA11 & getInstance(){
		static BasicResource_PA11 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA11() final= default;
};

class BasicResource_PA12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOA){};
public:
	static inline BasicResource_PA12 & getInstance(){
		static BasicResource_PA12 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA12() final= default;
};
class BasicResource_PA13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOA){};
public:
	static inline BasicResource_PA13 & getInstance(){
		static BasicResource_PA13 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA13() final= default;
};
class BasicResource_PA14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOA){};
public:
	static inline BasicResource_PA14 & getInstance(){
		static BasicResource_PA14 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA14() final= default;
};
class BasicResource_PA15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PA15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOA){};
public:
	static inline BasicResource_PA15 & getInstance(){
		static BasicResource_PA15 BasicResource_PA;
		return BasicResource_PA;
	}
	~BasicResource_PA15() final= default;
};

class BasicResource_PB0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOB){};
public:
	static inline BasicResource_PB0 & getInstance(){
		static BasicResource_PB0 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB0() final= default;
};
class BasicResource_PB1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOB){};
public:
	static inline BasicResource_PB1 & getInstance(){
		static BasicResource_PB1 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB1() final= default;
};
class BasicResource_PB2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOB){};
public:
	static inline BasicResource_PB2 & getInstance(){
		static BasicResource_PB2 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB2() final= default;
};
class BasicResource_PB3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOB){};
public:
	static inline BasicResource_PB3 & getInstance(){
		static BasicResource_PB3 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB3() final= default;
};

class BasicResource_PB4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOB){};
public:
	static inline BasicResource_PB4 & getInstance(){
		static BasicResource_PB4 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB4() final= default;
};
class BasicResource_PB5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOB){};
public:
	static inline BasicResource_PB5 & getInstance(){
		static BasicResource_PB5 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB5() final= default;
};
class BasicResource_PB6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOB){};
public:
	static inline BasicResource_PB6 & getInstance(){
		static BasicResource_PB6 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB6() final= default;
};
class BasicResource_PB7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOB){};
public:
	static inline BasicResource_PB7 & getInstance(){
		static BasicResource_PB7 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB7() final= default;
};


class BasicResource_PB8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOB){};
public:
	static inline BasicResource_PB8 & getInstance(){
		static BasicResource_PB8 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB8() final= default;
};
class BasicResource_PB9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOB){};
public:
	static inline BasicResource_PB9 & getInstance(){
		static BasicResource_PB9 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB9() final= default;
};
class BasicResource_PB10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOB){};
public:
	static inline BasicResource_PB10 & getInstance(){
		static BasicResource_PB10 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB10() final= default;
};
class BasicResource_PB11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOB){};
public:
	static inline BasicResource_PB11 & getInstance(){
		static BasicResource_PB11 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB11() final= default;
};

class BasicResource_PB12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOB){};
public:
	static inline BasicResource_PB12 & getInstance(){
		static BasicResource_PB12 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB12() final= default;
};
class BasicResource_PB13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOB){};
public:
	static inline BasicResource_PB13 & getInstance(){
		static BasicResource_PB13 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB13() final= default;
};
class BasicResource_PB14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOB){};
public:
	static inline BasicResource_PB14 & getInstance(){
		static BasicResource_PB14 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB14() final= default;
};
class BasicResource_PB15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PB15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOB){};
public:
	static inline BasicResource_PB15 & getInstance(){
		static BasicResource_PB15 BasicResource_PB;
		return BasicResource_PB;
	}
	~BasicResource_PB15() final= default;
};

class BasicResource_PC0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOC){};
public:
	static inline BasicResource_PC0 & getInstance(){
		static BasicResource_PC0 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC0() final= default;
};
class BasicResource_PC1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOC){};
public:
	static inline BasicResource_PC1 & getInstance(){
		static BasicResource_PC1 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC1() final= default;
};
class BasicResource_PC2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOC){};
public:
	static inline BasicResource_PC2 & getInstance(){
		static BasicResource_PC2 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC2() final= default;
};
class BasicResource_PC3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOC){};
public:
	static inline BasicResource_PC3 & getInstance(){
		static BasicResource_PC3 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC3() final= default;
};

class BasicResource_PC4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOC){};
public:
	static inline BasicResource_PC4 & getInstance(){
		static BasicResource_PC4 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC4() final= default;
};
class BasicResource_PC5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOC){};
public:
	static inline BasicResource_PC5 & getInstance(){
		static BasicResource_PC5 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC5() final= default;
};
class BasicResource_PC6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOC){};
public:
	static inline BasicResource_PC6 & getInstance(){
		static BasicResource_PC6 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC6() final= default;
};
class BasicResource_PC7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOC){};
public:
	static inline BasicResource_PC7 & getInstance(){
		static BasicResource_PC7 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC7() final= default;
};


class BasicResource_PC8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOC){};
public:
	static inline BasicResource_PC8 & getInstance(){
		static BasicResource_PC8 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC8() final= default;
};
class BasicResource_PC9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOC){};
public:
	static inline BasicResource_PC9 & getInstance(){
		static BasicResource_PC9 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC9() final= default;
};
class BasicResource_PC10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOC){};
public:
	static inline BasicResource_PC10 & getInstance(){
		static BasicResource_PC10 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC10() final= default;
};
class BasicResource_PC11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOC){};
public:
	static inline BasicResource_PC11 & getInstance(){
		static BasicResource_PC11 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC11() final= default;
};

class BasicResource_PC12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOC){};
public:
	static inline BasicResource_PC12 & getInstance(){
		static BasicResource_PC12 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC12() final= default;
};
class BasicResource_PC13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOC){};
public:
	static inline BasicResource_PC13 & getInstance(){
		static BasicResource_PC13 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC13() final= default;
};
class BasicResource_PC14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOC){};
public:
	static inline BasicResource_PC14 & getInstance(){
		static BasicResource_PC14 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC14() final= default;
};
class BasicResource_PC15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PC15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOC){};
public:
	static inline BasicResource_PC15 & getInstance(){
		static BasicResource_PC15 BasicResource_PC;
		return BasicResource_PC;
	}
	~BasicResource_PC15() final= default;
};

class BasicResource_PD0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOD){};
public:
	static inline BasicResource_PD0 & getInstance(){
		static BasicResource_PD0 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD0() final= default;
};
class BasicResource_PD1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOD){};
public:
	static inline BasicResource_PD1 & getInstance(){
		static BasicResource_PD1 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD1() final= default;
};
class BasicResource_PD2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOD){};
public:
	static inline BasicResource_PD2 & getInstance(){
		static BasicResource_PD2 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD2() final= default;
};
class BasicResource_PD3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOD){};
public:
	static inline BasicResource_PD3 & getInstance(){
		static BasicResource_PD3 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD3() final= default;
};

class BasicResource_PD4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOD){};
public:
	static inline BasicResource_PD4 & getInstance(){
		static BasicResource_PD4 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD4() final= default;
};
class BasicResource_PD5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOD){};
public:
	static inline BasicResource_PD5 & getInstance(){
		static BasicResource_PD5 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD5() final= default;
};
class BasicResource_PD6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOD){};
public:
	static inline BasicResource_PD6 & getInstance(){
		static BasicResource_PD6 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD6() final= default;
};
class BasicResource_PD7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOD){};
public:
	static inline BasicResource_PD7 & getInstance(){
		static BasicResource_PD7 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD7() final= default;
};


class BasicResource_PD8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOD){};
public:
	static inline BasicResource_PD8 & getInstance(){
		static BasicResource_PD8 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD8() final= default;
};
class BasicResource_PD9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOD){};
public:
	static inline BasicResource_PD9 & getInstance(){
		static BasicResource_PD9 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD9() final= default;
};
class BasicResource_PD10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOD){};
public:
	static inline BasicResource_PD10 & getInstance(){
		static BasicResource_PD10 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD10() final= default;
};
class BasicResource_PD11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOD){};
public:
	static inline BasicResource_PD11 & getInstance(){
		static BasicResource_PD11 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD11() final= default;
};

class BasicResource_PD12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOD){};
public:
	static inline BasicResource_PD12 & getInstance(){
		static BasicResource_PD12 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD12() final= default;
};
class BasicResource_PD13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOD){};
public:
	static inline BasicResource_PD13 & getInstance(){
		static BasicResource_PD13 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD13() final= default;
};
class BasicResource_PD14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOD){};
public:
	static inline BasicResource_PD14 & getInstance(){
		static BasicResource_PD14 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD14() final= default;
};
class BasicResource_PD15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PD15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOD){};
public:
	static inline BasicResource_PD15 & getInstance(){
		static BasicResource_PD15 BasicResource_PD;
		return BasicResource_PD;
	}
	~BasicResource_PD15() final= default;
};

class BasicResource_PE0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOE){};
public:
	static inline BasicResource_PE0 & getInstance(){
		static BasicResource_PE0 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE0() final= default;
};
class BasicResource_PE1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOE){};
public:
	static inline BasicResource_PE1 & getInstance(){
		static BasicResource_PE1 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE1() final= default;
};
class BasicResource_PE2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOE){};
public:
	static inline BasicResource_PE2 & getInstance(){
		static BasicResource_PE2 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE2() final= default;
};
class BasicResource_PE3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOE){};
public:
	static inline BasicResource_PE3 & getInstance(){
		static BasicResource_PE3 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE3() final= default;
};

class BasicResource_PE4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOE){};
public:
	static inline BasicResource_PE4 & getInstance(){
		static BasicResource_PE4 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE4() final= default;
};
class BasicResource_PE5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOE){};
public:
	static inline BasicResource_PE5 & getInstance(){
		static BasicResource_PE5 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE5() final= default;
};
class BasicResource_PE6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOE){};
public:
	static inline BasicResource_PE6 & getInstance(){
		static BasicResource_PE6 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE6() final= default;
};
class BasicResource_PE7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOE){};
public:
	static inline BasicResource_PE7 & getInstance(){
		static BasicResource_PE7 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE7() final= default;
};


class BasicResource_PE8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOE){};
public:
	static inline BasicResource_PE8 & getInstance(){
		static BasicResource_PE8 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE8() final= default;
};
class BasicResource_PE9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOE){};
public:
	static inline BasicResource_PE9 & getInstance(){
		static BasicResource_PE9 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE9() final= default;
};
class BasicResource_PE10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOE){};
public:
	static inline BasicResource_PE10 & getInstance(){
		static BasicResource_PE10 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE10() final= default;
};
class BasicResource_PE11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOE){};
public:
	static inline BasicResource_PE11 & getInstance(){
		static BasicResource_PE11 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE11() final= default;
};

class BasicResource_PE12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOE){};
public:
	static inline BasicResource_PE12 & getInstance(){
		static BasicResource_PE12 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE12() final= default;
};
class BasicResource_PE13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOE){};
public:
	static inline BasicResource_PE13 & getInstance(){
		static BasicResource_PE13 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE13() final= default;
};
class BasicResource_PE14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOE){};
public:
	static inline BasicResource_PE14 & getInstance(){
		static BasicResource_PE14 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE14() final= default;
};
class BasicResource_PE15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PE15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOE){};
public:
	static inline BasicResource_PE15 & getInstance(){
		static BasicResource_PE15 BasicResource_PE;
		return BasicResource_PE;
	}
	~BasicResource_PE15() final= default;
};

class BasicResource_PF0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOF){};
public:
	static inline BasicResource_PF0 & getInstance(){
		static BasicResource_PF0 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF0() final= default;
};
class BasicResource_PF1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOF){};
public:
	static inline BasicResource_PF1 & getInstance(){
		static BasicResource_PF1 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF1() final= default;
};
class BasicResource_PF2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOF){};
public:
	static inline BasicResource_PF2 & getInstance(){
		static BasicResource_PF2 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF2() final= default;
};
class BasicResource_PF3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOF){};
public:
	static inline BasicResource_PF3 & getInstance(){
		static BasicResource_PF3 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF3() final= default;
};

class BasicResource_PF4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOF){};
public:
	static inline BasicResource_PF4 & getInstance(){
		static BasicResource_PF4 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF4() final= default;
};
class BasicResource_PF5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOF){};
public:
	static inline BasicResource_PF5 & getInstance(){
		static BasicResource_PF5 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF5() final= default;
};
class BasicResource_PF6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOF){};
public:
	static inline BasicResource_PF6 & getInstance(){
		static BasicResource_PF6 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF6() final= default;
};
class BasicResource_PF7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOF){};
public:
	static inline BasicResource_PF7 & getInstance(){
		static BasicResource_PF7 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF7() final= default;
};


class BasicResource_PF8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOF){};
public:
	static inline BasicResource_PF8 & getInstance(){
		static BasicResource_PF8 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF8() final= default;
};
class BasicResource_PF9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOF){};
public:
	static inline BasicResource_PF9 & getInstance(){
		static BasicResource_PF9 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF9() final= default;
};
class BasicResource_PF10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOF){};
public:
	static inline BasicResource_PF10 & getInstance(){
		static BasicResource_PF10 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF10() final= default;
};
class BasicResource_PF11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOF){};
public:
	static inline BasicResource_PF11 & getInstance(){
		static BasicResource_PF11 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF11() final= default;
};

class BasicResource_PF12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOF){};
public:
	static inline BasicResource_PF12 & getInstance(){
		static BasicResource_PF12 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF12() final= default;
};
class BasicResource_PF13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOF){};
public:
	static inline BasicResource_PF13 & getInstance(){
		static BasicResource_PF13 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF13() final= default;
};
class BasicResource_PF14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOF){};
public:
	static inline BasicResource_PF14 & getInstance(){
		static BasicResource_PF14 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF14() final= default;
};
class BasicResource_PF15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PF15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOF){};
public:
	static inline BasicResource_PF15 & getInstance(){
		static BasicResource_PF15 BasicResource_PF;
		return BasicResource_PF;
	}
	~BasicResource_PF15() final= default;
};

class BasicResource_PG0: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG0() : BasicPinResourceBasicImpl(GPIO_PIN_0, GPIOG){};
public:
	static inline BasicResource_PG0 & getInstance(){
		static BasicResource_PG0 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG0() final= default;
};
class BasicResource_PG1: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG1() : BasicPinResourceBasicImpl(GPIO_PIN_1, GPIOG){};
public:
	static inline BasicResource_PG1 & getInstance(){
		static BasicResource_PG1 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG1() final= default;
};
class BasicResource_PG2: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG2() : BasicPinResourceBasicImpl(GPIO_PIN_2, GPIOG){};
public:
	static inline BasicResource_PG2 & getInstance(){
		static BasicResource_PG2 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG2() final= default;
};
class BasicResource_PG3: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG3() : BasicPinResourceBasicImpl(GPIO_PIN_3, GPIOG){};
public:
	static inline BasicResource_PG3 & getInstance(){
		static BasicResource_PG3 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG3() final= default;
};

class BasicResource_PG4: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG4() : BasicPinResourceBasicImpl(GPIO_PIN_4, GPIOG){};
public:
	static inline BasicResource_PG4 & getInstance(){
		static BasicResource_PG4 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG4() final= default;
};
class BasicResource_PG5: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG5() : BasicPinResourceBasicImpl(GPIO_PIN_5, GPIOG){};
public:
	static inline BasicResource_PG5 & getInstance(){
		static BasicResource_PG5 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG5() final= default;
};
class BasicResource_PG6: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG6() : BasicPinResourceBasicImpl(GPIO_PIN_6, GPIOG){};
public:
	static inline BasicResource_PG6 & getInstance(){
		static BasicResource_PG6 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG6() final= default;
};
class BasicResource_PG7: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG7() : BasicPinResourceBasicImpl(GPIO_PIN_7, GPIOG){};
public:
	static inline BasicResource_PG7 & getInstance(){
		static BasicResource_PG7 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG7() final= default;
};


class BasicResource_PG8: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG8() : BasicPinResourceBasicImpl(GPIO_PIN_8, GPIOG){};
public:
	static inline BasicResource_PG8 & getInstance(){
		static BasicResource_PG8 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG8() final= default;
};
class BasicResource_PG9: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG9() : BasicPinResourceBasicImpl(GPIO_PIN_9, GPIOG){};
public:
	static inline BasicResource_PG9 & getInstance(){
		static BasicResource_PG9 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG9() final= default;
};
class BasicResource_PG10: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG10() : BasicPinResourceBasicImpl(GPIO_PIN_10, GPIOG){};
public:
	static inline BasicResource_PG10 & getInstance(){
		static BasicResource_PG10 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG10() final= default;
};
class BasicResource_PG11: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG11() : BasicPinResourceBasicImpl(GPIO_PIN_11, GPIOG){};
public:
	static inline BasicResource_PG11 & getInstance(){
		static BasicResource_PG11 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG11() final= default;
};

class BasicResource_PG12: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG12() : BasicPinResourceBasicImpl(GPIO_PIN_12, GPIOG){};
public:
	static inline BasicResource_PG12 & getInstance(){
		static BasicResource_PG12 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG12() final= default;
};
class BasicResource_PG13: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG13() : BasicPinResourceBasicImpl(GPIO_PIN_13, GPIOG){};
public:
	static inline BasicResource_PG13 & getInstance(){
		static BasicResource_PG13 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG13() final= default;
};
class BasicResource_PG14: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG14() : BasicPinResourceBasicImpl(GPIO_PIN_14, GPIOG){};
public:
	static inline BasicResource_PG14 & getInstance(){
		static BasicResource_PG14 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG14() final= default;
};
class BasicResource_PG15: public BasicPinResourceBasicImpl{
protected:
	BasicResource_PG15() : BasicPinResourceBasicImpl(GPIO_PIN_15, GPIOG){};
public:
	static inline BasicResource_PG15 & getInstance(){
		static BasicResource_PG15 BasicResource_PG;
		return BasicResource_PG;
	}
	~BasicResource_PG15() final= default;
};

#endif

#endif //DRONE_BASICPINRESOURCETABLES_H
