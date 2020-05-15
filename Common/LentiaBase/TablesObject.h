//
// Created by TobiEgger on 14.02.2020.
//

#ifndef DRONE_TABLESOBJECT_H
#define DRONE_TABLESOBJECT_H

#include <string>
#include <memory>
#include <vector>
#include "../CPP/optional.h"

template <class T_Obj>
class TablesObject{
protected:
	TablesObject()= default;
public:
	virtual ~TablesObject()= default;

	typedef T_Obj* obj_ptr_t;
	typedef std::experimental::optional<std::string> opt_string_t;
	typedef std::experimental::optional<obj_ptr_t> opt_obj_ptr_t;
	typedef std::vector<obj_ptr_t> lut_obj_t;
	typedef std::experimental::optional<lut_obj_t> opt_obj_vect_t;

	virtual inline opt_string_t getIdentifier() const = 0;
	virtual inline opt_obj_ptr_t getInfoForObj(obj_ptr_t pin) const = 0;
	virtual inline opt_obj_vect_t getRawTable() const = 0;
	virtual inline opt_obj_ptr_t getAtPosition(int pos) const = 0;
	virtual inline int getSize() const = 0;
};

#endif //DRONE_TABLESOBJECT_H
