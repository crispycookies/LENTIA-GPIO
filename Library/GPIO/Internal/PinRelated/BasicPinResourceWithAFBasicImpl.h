//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_BASICPINRESOURCEWITHAFBASICIMPL_H
#define DRONE_BASICPINRESOURCEWITHAFBASICIMPL_H

#include "BasicPinResourceBasicImpl.h"

class BasicPinResourceWithAFBasicImpl : public BasicPinResourceBasicImpl{
public:
	typedef uint8_t af_t;
protected:
	af_t af;
public:
	BasicPinResourceWithAFBasicImpl(pin_t _pin, gpio_bank_t _bank, af_t _af) : BasicPinResourceBasicImpl(pin, bank),af(_af) {};
	virtual af_t getAF() const;
};


#endif //DRONE_BASICPINRESOURCEWITHAFBASICIMPL_H
