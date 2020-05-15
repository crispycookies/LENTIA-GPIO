//
// Created by TobiEgger on 13.02.2020.
//

#ifndef DRONE_OBJECT_H
#define DRONE_OBJECT_H

#if defined(STM32F301x8) || defined(STM32F302x8) || defined(STM32F302xC) || defined(STM32F302xE) || defined(STM32F303x8) || defined(STM32F303xC) || defined(STM32F303xE) || defined(STM32F373xC) || defined(STM32F334x8) || defined(STM32F318xx) || defined(STM32F328xx) || defined(STM32F358xx) || defined(STM32F378xx) || defined(STM32F398xx)
#include <stm32f3xx.h>
#endif

class Object{
protected:
	Object()= default;
public:
	virtual ~Object() = default;
};

#endif //DRONE_OBJECT_H
