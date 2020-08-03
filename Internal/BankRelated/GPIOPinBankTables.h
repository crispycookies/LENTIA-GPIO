//
// Created by TobiEgger on 15.02.2020.
//

#ifndef DRONE_GPIOPINBANKTABLES_H
#define DRONE_GPIOPINBANKTABLES_H

#include "../../../../Common/LentiaBase/TablesObjectBasicImpl.h"
#include "PintablesGPIOBanks.h"

#ifdef STM32F303xE
class GPIOPinBankTables: public TablesObjectBasicImpl<TablesObjectBasicImpl<Pintable>>{
protected:
	GPIOPinBankTables() : TablesObjectBasicImpl<TablesObjectBasicImpl<Pintable>>(
			lut_obj_t({
							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOA::getInstance()),[](TablesObjectBasicImpl<Pintable> *){}),
							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOB::getInstance()),[](TablesObjectBasicImpl<Pintable> *){}),
							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOC::getInstance()),[](TablesObjectBasicImpl<Pintable> *){}),
							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOD::getInstance()),[](TablesObjectBasicImpl<Pintable> *){}),

							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOE::getInstance()),[](TablesObjectBasicImpl<Pintable> *){}),
							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOF::getInstance()),[](TablesObjectBasicImpl<Pintable> *){}),
							 std::shared_ptr<TablesObjectBasicImpl<Pintable>>(&(Pintable_GPIOG::getInstance()),[](TablesObjectBasicImpl<Pintable> *){})
					  }
			),
			"GPIO_Banks_Pins"
			)
	{};
public:
	static inline GPIOPinBankTables & getInstance(){
		static GPIOPinBankTables PG;
		return PG;
	}
	~GPIOPinBankTables() final= default;
};
#endif

#endif //DRONE_GPIOPINBANKTABLES_H
