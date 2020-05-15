//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_SYNCHRONIZATIONOBJECT_H
#define DRONE_SYNCHRONIZATIONOBJECT_H

#include "Object.h"
#include <memory>

class SynchronizationObject : public Object{
protected:
	SynchronizationObject()= default;

public:
	typedef void* void_ptr;
	virtual ~SynchronizationObject() = default;

	virtual bool getResource(void_ptr possibly_new_owner) = 0;
	virtual bool releaseResource(void_ptr possibly_old_owner) = 0;
};

#endif //DRONE_SYNCHRONIZATIONOBJECT_H
