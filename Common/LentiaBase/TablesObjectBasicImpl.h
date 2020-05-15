//
// Created by TobiEgger on 14.02.2020.
//

#ifndef DRONE_TABLESOBJECTBASICIMPL_H
#define DRONE_TABLESOBJECTBASICIMPL_H

#include "TablesObject.h"
#include <algorithm>

template <class T_Obj>
class TablesObjectBasicImpl : public TablesObject<T_Obj>{
protected:
	typedef typename TablesObject<T_Obj>::obj_ptr_t obj_ptr_t;
	typedef typename TablesObject<T_Obj>::opt_string_t opt_string_t;
	typedef typename TablesObject<T_Obj>::opt_obj_ptr_t opt_obj_ptr_t;
	typedef typename TablesObject<T_Obj>::lut_obj_t lut_obj_t;
	typedef typename TablesObject<T_Obj>::opt_obj_vect_t opt_obj_vect_t;

	const lut_obj_t lut;
	const std::string identifier;
	TablesObjectBasicImpl(const lut_obj_t & _lut, const std::string & _identifier):
			lut(_lut),
			identifier(_identifier)
	{};
public:
	~TablesObjectBasicImpl() override = default;
	inline opt_string_t getIdentifier() const override{
		if(identifier.empty() || identifier.find_first_not_of(' ') != std::string::npos){
			return {};
		}
		return identifier;
	}
	inline opt_obj_ptr_t getInfoForObj(obj_ptr_t pin) const override{
		if(lut.empty() || pin == nullptr){
			return {};
		}
		auto find = std::find_if(lut.cbegin(),lut.cend(),[&](const obj_ptr_t & ptr){
			if(ptr== nullptr){
				return false;
			}
			return pin == ptr;
		});
		if(find == lut.cend()){
			return {};
		}
		return *find;
	}
	inline opt_obj_vect_t getRawTable() const override{
		if(lut.empty()){
			return {};
		}
		return lut;
	}
	inline opt_obj_ptr_t getAtPosition(int pos) const override{
		if(pos > lut.size()){
			return {};
		}
		return lut.at(pos);
	}
	inline int getSize() const override{
		return lut.size();
	}
};

#endif //DRONE_TABLESOBJECTBASICIMPL_H
