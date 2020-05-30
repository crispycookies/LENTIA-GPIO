//
// Created by TobiEgger on 19.02.2020.
//

#ifndef DRONE_DEVICEOBJECT_H
#define DRONE_DEVICEOBJECT_H


#include "Object.h"

class DeviceObject : public Object{
protected:
	DeviceObject()= default;

public:
	~DeviceObject() override = default;

	virtual bool init() = 0;
	virtual bool de_init() = 0;
};

#endif //DRONE_DEVICEOBJECT_H
