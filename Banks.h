//
// Created by TobiEgger on 16.02.2020.
//

#ifndef DRONE_BANKS_H
#define DRONE_BANKS_H

#include "Internal/BankRelated/GPIOBankBasicImpl.h"

#if defined(PINS64) || defined(PINS48) || defined(PINS32)

class  GPIOBankA : public GPIOBankBasicImpl{
protected:
	GPIOBankA() : GPIOBankBasicImpl(
			GPIOA){};
public:
	static inline GPIOBankA & getInstance(){
		static GPIOBankA bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOA_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOA_CLK_DISABLE();
		return true;
	}
	~GPIOBankA() final= default;
};

class  GPIOBankB : public GPIOBankBasicImpl{
protected:
	GPIOBankB() : GPIOBankBasicImpl(
			GPIOB){};
public:
	static inline GPIOBankB & getInstance(){
		static GPIOBankB bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOB_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOB_CLK_DISABLE();
		return true;
	}
	~GPIOBankB() final= default;
};

#endif


#if defined(PINS64) || defined(PINS48)

class  GPIOBankC : public GPIOBankBasicImpl{
protected:
	GPIOBankC() : GPIOBankBasicImpl(
			GPIOC){};
public:
	static inline GPIOBankC & getInstance(){
		static GPIOBankC bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOC_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOC_CLK_DISABLE();
		return true;
	}
	~GPIOBankC() final= default;
};

#endif


#if defined(PINS64)

class  GPIOBankD : public GPIOBankBasicImpl{
protected:
	GPIOBankD() : GPIOBankBasicImpl(
			GPIOD){};
public:
	static inline GPIOBankD & getInstance(){
		static GPIOBankD bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOD_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOD_CLK_DISABLE();
		return true;
	}
	~GPIOBankD() final= default;
};

class  GPIOBankE : public GPIOBankBasicImpl{
protected:
	GPIOBankE() : GPIOBankBasicImpl(
			GPIOE){};
public:
	static inline GPIOBankE & getInstance(){
		static GPIOBankE bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOE_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOE_CLK_DISABLE();
		return true;
	}
	~GPIOBankE() final= default;
};

class  GPIOBankF : public GPIOBankBasicImpl{
protected:
	GPIOBankF() : GPIOBankBasicImpl(
			GPIOE){};
public:
	static inline GPIOBankF & getInstance(){
		static GPIOBankF bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOF_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOF_CLK_DISABLE();
		return true;
	}
	~GPIOBankF() final= default;
};

class  GPIOBankG : public GPIOBankBasicImpl{
protected:
	GPIOBankG() : GPIOBankBasicImpl(
			GPIOG){};
public:
	static inline GPIOBankG & getInstance(){
		static GPIOBankG bank;
		return bank;
	}
	inline bool enableClockOverride() override {
		__HAL_RCC_GPIOG_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override {
		__HAL_RCC_GPIOG_CLK_DISABLE();
		return true;
	}
	~GPIOBankG() final= default;
};
class  GPIOBankH : public GPIOBankBasicImpl{
protected:
    GPIOBankH() : GPIOBankBasicImpl(
            GPIOH){};
public:
    static inline GPIOBankH & getInstance(){
        static GPIOBankH bank;
        return bank;
    }
    inline bool enableClockOverride() override {
        __HAL_RCC_GPIOH_CLK_ENABLE();
        return true;
    }

    inline bool disableClockOverride() override {
        __HAL_RCC_GPIOH_CLK_DISABLE();
        return true;
    }
    ~GPIOBankH() final= default;
};

#endif

#endif
