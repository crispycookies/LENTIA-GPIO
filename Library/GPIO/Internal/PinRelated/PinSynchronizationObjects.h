//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_PINSYNCHRONIZATIONOBJECTS_H
#define DRONE_PINSYNCHRONIZATIONOBJECTS_H

#include "../../../../Common/LentiaBase/SynchronizationObjectBasicImpl.h"

#ifdef STM32F303xE
class __SYNCH_PA0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA0()  = default;
public:
	static inline __SYNCH_PA0 & getInstance(){
		static __SYNCH_PA0 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA0() final= default;
};
class __SYNCH_PA1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA1()  = default;
public:
	static inline __SYNCH_PA1 & getInstance(){
		static __SYNCH_PA1 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA1() final= default;
};
class __SYNCH_PA2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA2()  = default;
public:
	static inline __SYNCH_PA2 & getInstance(){
		static __SYNCH_PA2 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA2() final= default;
};
class __SYNCH_PA3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA3()  = default;
public:
	static inline __SYNCH_PA3 & getInstance(){
		static __SYNCH_PA3 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA3() final= default;
};

class __SYNCH_PA4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA4()  = default;
public:
	static inline __SYNCH_PA4 & getInstance(){
		static __SYNCH_PA4 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA4() final= default;
};
class __SYNCH_PA5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA5()  = default;
public:
	static inline __SYNCH_PA5 & getInstance(){
		static __SYNCH_PA5 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA5() final= default;
};
class __SYNCH_PA6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA6()  = default;
public:
	static inline __SYNCH_PA6 & getInstance(){
		static __SYNCH_PA6 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA6() final= default;
};
class __SYNCH_PA7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA7()  = default;
public:
	static inline __SYNCH_PA7 & getInstance(){
		static __SYNCH_PA7 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA7() final= default;
};


class __SYNCH_PA8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA8()  = default;
public:
	static inline __SYNCH_PA8 & getInstance(){
		static __SYNCH_PA8 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA8() final= default;
};
class __SYNCH_PA9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA9()  = default;
public:
	static inline __SYNCH_PA9 & getInstance(){
		static __SYNCH_PA9 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA9() final= default;
};
class __SYNCH_PA10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA10()  = default;
public:
	static inline __SYNCH_PA10 & getInstance(){
		static __SYNCH_PA10 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA10() final= default;
};
class __SYNCH_PA11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA11()  = default;
public:
	static inline __SYNCH_PA11 & getInstance(){
		static __SYNCH_PA11 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA11() final= default;
};

class __SYNCH_PA12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA12()  = default;
public:
	static inline __SYNCH_PA12 & getInstance(){
		static __SYNCH_PA12 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA12() final= default;
};
class __SYNCH_PA13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA13()  = default;
public:
	static inline __SYNCH_PA13 & getInstance(){
		static __SYNCH_PA13 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA13() final= default;
};
class __SYNCH_PA14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA14()  = default;
public:
	static inline __SYNCH_PA14 & getInstance(){
		static __SYNCH_PA14 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA14() final= default;
};
class __SYNCH_PA15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PA15()  = default;
public:
	static inline __SYNCH_PA15 & getInstance(){
		static __SYNCH_PA15 __SYNCH_PA;
		return __SYNCH_PA;
	}
	~__SYNCH_PA15() final= default;
};

class __SYNCH_PB0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB0()  = default;
public:
	static inline __SYNCH_PB0 & getInstance(){
		static __SYNCH_PB0 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB0() final= default;
};
class __SYNCH_PB1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB1()  = default;
public:
	static inline __SYNCH_PB1 & getInstance(){
		static __SYNCH_PB1 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB1() final= default;
};
class __SYNCH_PB2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB2()  = default;
public:
	static inline __SYNCH_PB2 & getInstance(){
		static __SYNCH_PB2 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB2() final= default;
};
class __SYNCH_PB3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB3()  = default;
public:
	static inline __SYNCH_PB3 & getInstance(){
		static __SYNCH_PB3 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB3() final= default;
};

class __SYNCH_PB4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB4()  = default;
public:
	static inline __SYNCH_PB4 & getInstance(){
		static __SYNCH_PB4 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB4() final= default;
};
class __SYNCH_PB5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB5()  = default;
public:
	static inline __SYNCH_PB5 & getInstance(){
		static __SYNCH_PB5 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB5() final= default;
};
class __SYNCH_PB6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB6()  = default;
public:
	static inline __SYNCH_PB6 & getInstance(){
		static __SYNCH_PB6 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB6() final= default;
};
class __SYNCH_PB7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB7()  = default;
public:
	static inline __SYNCH_PB7 & getInstance(){
		static __SYNCH_PB7 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB7() final= default;
};


class __SYNCH_PB8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB8()  = default;
public:
	static inline __SYNCH_PB8 & getInstance(){
		static __SYNCH_PB8 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB8() final= default;
};
class __SYNCH_PB9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB9()  = default;
public:
	static inline __SYNCH_PB9 & getInstance(){
		static __SYNCH_PB9 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB9() final= default;
};
class __SYNCH_PB10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB10()  = default;
public:
	static inline __SYNCH_PB10 & getInstance(){
		static __SYNCH_PB10 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB10() final= default;
};
class __SYNCH_PB11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB11()  = default;
public:
	static inline __SYNCH_PB11 & getInstance(){
		static __SYNCH_PB11 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB11() final= default;
};

class __SYNCH_PB12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB12()  = default;
public:
	static inline __SYNCH_PB12 & getInstance(){
		static __SYNCH_PB12 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB12() final= default;
};
class __SYNCH_PB13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB13()  = default;
public:
	static inline __SYNCH_PB13 & getInstance(){
		static __SYNCH_PB13 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB13() final= default;
};
class __SYNCH_PB14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB14()  = default;
public:
	static inline __SYNCH_PB14 & getInstance(){
		static __SYNCH_PB14 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB14() final= default;
};
class __SYNCH_PB15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PB15()  = default;
public:
	static inline __SYNCH_PB15 & getInstance(){
		static __SYNCH_PB15 __SYNCH_PB;
		return __SYNCH_PB;
	}
	~__SYNCH_PB15() final= default;
};

class __SYNCH_PC0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC0()  = default;
public:
	static inline __SYNCH_PC0 & getInstance(){
		static __SYNCH_PC0 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC0() final= default;
};
class __SYNCH_PC1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC1()  = default;
public:
	static inline __SYNCH_PC1 & getInstance(){
		static __SYNCH_PC1 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC1() final= default;
};
class __SYNCH_PC2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC2()  = default;
public:
	static inline __SYNCH_PC2 & getInstance(){
		static __SYNCH_PC2 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC2() final= default;
};
class __SYNCH_PC3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC3()  = default;
public:
	static inline __SYNCH_PC3 & getInstance(){
		static __SYNCH_PC3 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC3() final= default;
};

class __SYNCH_PC4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC4()  = default;
public:
	static inline __SYNCH_PC4 & getInstance(){
		static __SYNCH_PC4 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC4() final= default;
};
class __SYNCH_PC5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC5()  = default;
public:
	static inline __SYNCH_PC5 & getInstance(){
		static __SYNCH_PC5 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC5() final= default;
};
class __SYNCH_PC6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC6()  = default;
public:
	static inline __SYNCH_PC6 & getInstance(){
		static __SYNCH_PC6 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC6() final= default;
};
class __SYNCH_PC7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC7()  = default;
public:
	static inline __SYNCH_PC7 & getInstance(){
		static __SYNCH_PC7 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC7() final= default;
};


class __SYNCH_PC8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC8()  = default;
public:
	static inline __SYNCH_PC8 & getInstance(){
		static __SYNCH_PC8 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC8() final= default;
};
class __SYNCH_PC9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC9()  = default;
public:
	static inline __SYNCH_PC9 & getInstance(){
		static __SYNCH_PC9 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC9() final= default;
};
class __SYNCH_PC10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC10()  = default;
public:
	static inline __SYNCH_PC10 & getInstance(){
		static __SYNCH_PC10 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC10() final= default;
};
class __SYNCH_PC11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC11()  = default;
public:
	static inline __SYNCH_PC11 & getInstance(){
		static __SYNCH_PC11 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC11() final= default;
};

class __SYNCH_PC12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC12()  = default;
public:
	static inline __SYNCH_PC12 & getInstance(){
		static __SYNCH_PC12 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC12() final= default;
};
class __SYNCH_PC13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC13()  = default;
public:
	static inline __SYNCH_PC13 & getInstance(){
		static __SYNCH_PC13 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC13() final= default;
};
class __SYNCH_PC14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC14()  = default;
public:
	static inline __SYNCH_PC14 & getInstance(){
		static __SYNCH_PC14 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC14() final= default;
};
class __SYNCH_PC15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PC15()  = default;
public:
	static inline __SYNCH_PC15 & getInstance(){
		static __SYNCH_PC15 __SYNCH_PC;
		return __SYNCH_PC;
	}
	~__SYNCH_PC15() final= default;
};

class __SYNCH_PD0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD0()  = default;
public:
	static inline __SYNCH_PD0 & getInstance(){
		static __SYNCH_PD0 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD0() final= default;
};
class __SYNCH_PD1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD1()  = default;
public:
	static inline __SYNCH_PD1 & getInstance(){
		static __SYNCH_PD1 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD1() final= default;
};
class __SYNCH_PD2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD2()  = default;
public:
	static inline __SYNCH_PD2 & getInstance(){
		static __SYNCH_PD2 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD2() final= default;
};
class __SYNCH_PD3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD3()  = default;
public:
	static inline __SYNCH_PD3 & getInstance(){
		static __SYNCH_PD3 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD3() final= default;
};

class __SYNCH_PD4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD4()  = default;
public:
	static inline __SYNCH_PD4 & getInstance(){
		static __SYNCH_PD4 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD4() final= default;
};
class __SYNCH_PD5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD5()  = default;
public:
	static inline __SYNCH_PD5 & getInstance(){
		static __SYNCH_PD5 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD5() final= default;
};
class __SYNCH_PD6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD6()  = default;
public:
	static inline __SYNCH_PD6 & getInstance(){
		static __SYNCH_PD6 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD6() final= default;
};
class __SYNCH_PD7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD7()  = default;
public:
	static inline __SYNCH_PD7 & getInstance(){
		static __SYNCH_PD7 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD7() final= default;
};


class __SYNCH_PD8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD8()  = default;
public:
	static inline __SYNCH_PD8 & getInstance(){
		static __SYNCH_PD8 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD8() final= default;
};
class __SYNCH_PD9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD9()  = default;
public:
	static inline __SYNCH_PD9 & getInstance(){
		static __SYNCH_PD9 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD9() final= default;
};
class __SYNCH_PD10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD10()  = default;
public:
	static inline __SYNCH_PD10 & getInstance(){
		static __SYNCH_PD10 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD10() final= default;
};
class __SYNCH_PD11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD11()  = default;
public:
	static inline __SYNCH_PD11 & getInstance(){
		static __SYNCH_PD11 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD11() final= default;
};

class __SYNCH_PD12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD12()  = default;
public:
	static inline __SYNCH_PD12 & getInstance(){
		static __SYNCH_PD12 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD12() final= default;
};
class __SYNCH_PD13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD13()  = default;
public:
	static inline __SYNCH_PD13 & getInstance(){
		static __SYNCH_PD13 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD13() final= default;
};
class __SYNCH_PD14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD14()  = default;
public:
	static inline __SYNCH_PD14 & getInstance(){
		static __SYNCH_PD14 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD14() final= default;
};
class __SYNCH_PD15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PD15()  = default;
public:
	static inline __SYNCH_PD15 & getInstance(){
		static __SYNCH_PD15 __SYNCH_PD;
		return __SYNCH_PD;
	}
	~__SYNCH_PD15() final= default;
};

class __SYNCH_PE0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE0()  = default;
public:
	static inline __SYNCH_PE0 & getInstance(){
		static __SYNCH_PE0 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE0() final= default;
};
class __SYNCH_PE1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE1()  = default;
public:
	static inline __SYNCH_PE1 & getInstance(){
		static __SYNCH_PE1 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE1() final= default;
};
class __SYNCH_PE2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE2()  = default;
public:
	static inline __SYNCH_PE2 & getInstance(){
		static __SYNCH_PE2 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE2() final= default;
};
class __SYNCH_PE3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE3()  = default;
public:
	static inline __SYNCH_PE3 & getInstance(){
		static __SYNCH_PE3 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE3() final= default;
};

class __SYNCH_PE4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE4()  = default;
public:
	static inline __SYNCH_PE4 & getInstance(){
		static __SYNCH_PE4 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE4() final= default;
};
class __SYNCH_PE5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE5()  = default;
public:
	static inline __SYNCH_PE5 & getInstance(){
		static __SYNCH_PE5 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE5() final= default;
};
class __SYNCH_PE6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE6()  = default;
public:
	static inline __SYNCH_PE6 & getInstance(){
		static __SYNCH_PE6 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE6() final= default;
};
class __SYNCH_PE7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE7()  = default;
public:
	static inline __SYNCH_PE7 & getInstance(){
		static __SYNCH_PE7 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE7() final= default;
};


class __SYNCH_PE8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE8()  = default;
public:
	static inline __SYNCH_PE8 & getInstance(){
		static __SYNCH_PE8 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE8() final= default;
};
class __SYNCH_PE9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE9()  = default;
public:
	static inline __SYNCH_PE9 & getInstance(){
		static __SYNCH_PE9 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE9() final= default;
};
class __SYNCH_PE10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE10()  = default;
public:
	static inline __SYNCH_PE10 & getInstance(){
		static __SYNCH_PE10 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE10() final= default;
};
class __SYNCH_PE11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE11()  = default;
public:
	static inline __SYNCH_PE11 & getInstance(){
		static __SYNCH_PE11 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE11() final= default;
};

class __SYNCH_PE12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE12()  = default;
public:
	static inline __SYNCH_PE12 & getInstance(){
		static __SYNCH_PE12 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE12() final= default;
};
class __SYNCH_PE13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE13()  = default;
public:
	static inline __SYNCH_PE13 & getInstance(){
		static __SYNCH_PE13 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE13() final= default;
};
class __SYNCH_PE14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE14()  = default;
public:
	static inline __SYNCH_PE14 & getInstance(){
		static __SYNCH_PE14 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE14() final= default;
};
class __SYNCH_PE15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PE15()  = default;
public:
	static inline __SYNCH_PE15 & getInstance(){
		static __SYNCH_PE15 __SYNCH_PE;
		return __SYNCH_PE;
	}
	~__SYNCH_PE15() final= default;
};

class __SYNCH_PF0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF0()  = default;
public:
	static inline __SYNCH_PF0 & getInstance(){
		static __SYNCH_PF0 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF0() final= default;
};
class __SYNCH_PF1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF1()  = default;
public:
	static inline __SYNCH_PF1 & getInstance(){
		static __SYNCH_PF1 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF1() final= default;
};
class __SYNCH_PF2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF2()  = default;
public:
	static inline __SYNCH_PF2 & getInstance(){
		static __SYNCH_PF2 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF2() final= default;
};
class __SYNCH_PF3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF3()  = default;
public:
	static inline __SYNCH_PF3 & getInstance(){
		static __SYNCH_PF3 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF3() final= default;
};

class __SYNCH_PF4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF4()  = default;
public:
	static inline __SYNCH_PF4 & getInstance(){
		static __SYNCH_PF4 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF4() final= default;
};
class __SYNCH_PF5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF5()  = default;
public:
	static inline __SYNCH_PF5 & getInstance(){
		static __SYNCH_PF5 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF5() final= default;
};
class __SYNCH_PF6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF6()  = default;
public:
	static inline __SYNCH_PF6 & getInstance(){
		static __SYNCH_PF6 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF6() final= default;
};
class __SYNCH_PF7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF7()  = default;
public:
	static inline __SYNCH_PF7 & getInstance(){
		static __SYNCH_PF7 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF7() final= default;
};


class __SYNCH_PF8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF8()  = default;
public:
	static inline __SYNCH_PF8 & getInstance(){
		static __SYNCH_PF8 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF8() final= default;
};
class __SYNCH_PF9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF9()  = default;
public:
	static inline __SYNCH_PF9 & getInstance(){
		static __SYNCH_PF9 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF9() final= default;
};
class __SYNCH_PF10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF10()  = default;
public:
	static inline __SYNCH_PF10 & getInstance(){
		static __SYNCH_PF10 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF10() final= default;
};
class __SYNCH_PF11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF11()  = default;
public:
	static inline __SYNCH_PF11 & getInstance(){
		static __SYNCH_PF11 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF11() final= default;
};

class __SYNCH_PF12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF12()  = default;
public:
	static inline __SYNCH_PF12 & getInstance(){
		static __SYNCH_PF12 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF12() final= default;
};
class __SYNCH_PF13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF13()  = default;
public:
	static inline __SYNCH_PF13 & getInstance(){
		static __SYNCH_PF13 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF13() final= default;
};
class __SYNCH_PF14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF14()  = default;
public:
	static inline __SYNCH_PF14 & getInstance(){
		static __SYNCH_PF14 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF14() final= default;
};
class __SYNCH_PF15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PF15()  = default;
public:
	static inline __SYNCH_PF15 & getInstance(){
		static __SYNCH_PF15 __SYNCH_PF;
		return __SYNCH_PF;
	}
	~__SYNCH_PF15() final= default;
};

class __SYNCH_PG0: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG0()  = default;
public:
	static inline __SYNCH_PG0 & getInstance(){
		static __SYNCH_PG0 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG0() final= default;
};
class __SYNCH_PG1: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG1()  = default;
public:
	static inline __SYNCH_PG1 & getInstance(){
		static __SYNCH_PG1 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG1() final= default;
};
class __SYNCH_PG2: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG2()  = default;
public:
	static inline __SYNCH_PG2 & getInstance(){
		static __SYNCH_PG2 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG2() final= default;
};
class __SYNCH_PG3: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG3()  = default;
public:
	static inline __SYNCH_PG3 & getInstance(){
		static __SYNCH_PG3 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG3() final= default;
};

class __SYNCH_PG4: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG4()  = default;
public:
	static inline __SYNCH_PG4 & getInstance(){
		static __SYNCH_PG4 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG4() final= default;
};
class __SYNCH_PG5: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG5()  = default;
public:
	static inline __SYNCH_PG5 & getInstance(){
		static __SYNCH_PG5 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG5() final= default;
};
class __SYNCH_PG6: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG6()  = default;
public:
	static inline __SYNCH_PG6 & getInstance(){
		static __SYNCH_PG6 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG6() final= default;
};
class __SYNCH_PG7: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG7()  = default;
public:
	static inline __SYNCH_PG7 & getInstance(){
		static __SYNCH_PG7 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG7() final= default;
};


class __SYNCH_PG8: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG8()  = default;
public:
	static inline __SYNCH_PG8 & getInstance(){
		static __SYNCH_PG8 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG8() final= default;
};
class __SYNCH_PG9: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG9()  = default;
public:
	static inline __SYNCH_PG9 & getInstance(){
		static __SYNCH_PG9 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG9() final= default;
};
class __SYNCH_PG10: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG10()  = default;
public:
	static inline __SYNCH_PG10 & getInstance(){
		static __SYNCH_PG10 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG10() final= default;
};
class __SYNCH_PG11: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG11()  = default;
public:
	static inline __SYNCH_PG11 & getInstance(){
		static __SYNCH_PG11 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG11() final= default;
};

class __SYNCH_PG12: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG12()  = default;
public:
	static inline __SYNCH_PG12 & getInstance(){
		static __SYNCH_PG12 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG12() final= default;
};
class __SYNCH_PG13: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG13()  = default;
public:
	static inline __SYNCH_PG13 & getInstance(){
		static __SYNCH_PG13 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG13() final= default;
};
class __SYNCH_PG14: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG14()  = default;
public:
	static inline __SYNCH_PG14 & getInstance(){
		static __SYNCH_PG14 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG14() final= default;
};
class __SYNCH_PG15: public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_PG15()  = default;
public:
	static inline __SYNCH_PG15 & getInstance(){
		static __SYNCH_PG15 __SYNCH_PG;
		return __SYNCH_PG;
	}
	~__SYNCH_PG15() final= default;
};
class __SYNCH_PH0: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH0()  = default;
public:
    static inline __SYNCH_PH0 & getInstance(){
        static __SYNCH_PH0 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH0() final= default;
};
class __SYNCH_PH1: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH1()  = default;
public:
    static inline __SYNCH_PH1 & getInstance(){
        static __SYNCH_PH1 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH1() final= default;
};
class __SYNCH_PH2: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH2()  = default;
public:
    static inline __SYNCH_PH2 & getInstance(){
        static __SYNCH_PH2 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH2() final= default;
};
class __SYNCH_PH3: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH3()  = default;
public:
    static inline __SYNCH_PH3 & getInstance(){
        static __SYNCH_PH3 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH3() final= default;
};

class __SYNCH_PH4: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH4()  = default;
public:
    static inline __SYNCH_PH4 & getInstance(){
        static __SYNCH_PH4 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH4() final= default;
};
class __SYNCH_PH5: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH5()  = default;
public:
    static inline __SYNCH_PH5 & getInstance(){
        static __SYNCH_PH5 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH5() final= default;
};
class __SYNCH_PH6: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH6()  = default;
public:
    static inline __SYNCH_PH6 & getInstance(){
        static __SYNCH_PH6 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH6() final= default;
};
class __SYNCH_PH7: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH7()  = default;
public:
    static inline __SYNCH_PH7 & getInstance(){
        static __SYNCH_PH7 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH7() final= default;
};


class __SYNCH_PH8: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH8()  = default;
public:
    static inline __SYNCH_PH8 & getInstance(){
        static __SYNCH_PH8 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH8() final= default;
};
class __SYNCH_PH9: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH9()  = default;
public:
    static inline __SYNCH_PH9 & getInstance(){
        static __SYNCH_PH9 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH9() final= default;
};
class __SYNCH_PH10: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH10()  = default;
public:
    static inline __SYNCH_PH10 & getInstance(){
        static __SYNCH_PH10 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH10() final= default;
};
class __SYNCH_PH11: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH11()  = default;
public:
    static inline __SYNCH_PH11 & getInstance(){
        static __SYNCH_PH11 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH11() final= default;
};

class __SYNCH_PH12: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH12()  = default;
public:
    static inline __SYNCH_PH12 & getInstance(){
        static __SYNCH_PH12 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH12() final= default;
};
class __SYNCH_PH13: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH13()  = default;
public:
    static inline __SYNCH_PH13 & getInstance(){
        static __SYNCH_PH13 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH13() final= default;
};
class __SYNCH_PH14: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH14()  = default;
public:
    static inline __SYNCH_PH14 & getInstance(){
        static __SYNCH_PH14 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH14() final= default;
};
class __SYNCH_PH15: public SynchronizationObjectBasicImpl{
protected:
    __SYNCH_PH15()  = default;
public:
    static inline __SYNCH_PH15 & getInstance(){
        static __SYNCH_PH15 __SYNCH_PH;
        return __SYNCH_PH;
    }
    ~__SYNCH_PH15() final= default;
};

#endif
#endif //DRONE_PINSYNCHRONIZATIONOBJECTS_H
