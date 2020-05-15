//
// Created by TobiEgger on 17.02.2020.
//

#include "SynchronizationObjectBasicImpl.h"

bool SynchronizationObjectBasicImpl::getResource(SynchronizationObject::void_ptr possibly_new_owner) {
	if(possibly_new_owner == nullptr){
		return false;
	}
	if(owner == nullptr || owner == possibly_new_owner) { // has no owner
		owner = possibly_new_owner;
		return true;
	}
	return false;
}

bool SynchronizationObjectBasicImpl::releaseResource(SynchronizationObject::void_ptr possibly_old_owner) {
	if(possibly_old_owner == nullptr){
		return false;
	}
	if(owner == nullptr){
		return false;
	}
	if(owner == possibly_old_owner){
		owner = nullptr;
		return true;
	}
	return false;
}
