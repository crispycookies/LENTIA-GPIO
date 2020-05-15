//
// Created by TobiEgger on 17.02.2020.
//

#ifndef DRONE_SYNCHRONIZATIONOBJECTBASICIMPL_H
#define DRONE_SYNCHRONIZATIONOBJECTBASICIMPL_H

#include "SynchronizationObject.h"
#include <memory>
//DeFacto Mutex

class SynchronizationObjectBasicImpl : public SynchronizationObject {
protected:
	SynchronizationObjectBasicImpl() = default;
	void_ptr owner= nullptr;
public:
	~SynchronizationObjectBasicImpl() override = default;

	bool getResource(void_ptr possibly_new_owner) override ;
	bool releaseResource(void_ptr possibly_old_owner) override ;
};


#endif //DRONE_SYNCHRONIZATIONOBJECTBASICIMPL_H
