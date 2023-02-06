#pragma once
#include <vector>

#include "Phone.h"


class PhoneManager
{
	std::vector<Phone>storedPhones; // instead of using vector i could use Phones* storedPhones { new Phones[length]{}} and expand array but operation on vector would be easier
	int getNewPhoneId();
	Phone getNewPhoneData();

	void printByBrand();


public:

	void addPhone();
	void printAllPhones();//method helping during work, late should make it private
	void deletePhone();

	void printRaport(); //should be moved to separate class during refactor, not enough time for that
};

