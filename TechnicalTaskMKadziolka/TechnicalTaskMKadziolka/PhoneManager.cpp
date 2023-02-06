#include "PhoneManager.h"
#include <iostream>

int PhoneManager::getNewPhoneId()
{
	return (storedPhones.empty())? 1 : storedPhones.back().getId()+1;
}

void PhoneManager::addPhone()
{
	Phone phone = getNewPhoneData();
	storedPhones.push_back(phone);
	std::cout << "Phone had been added!";
	getchar();
}

//unsigned int id;
//std::string brandName;
//std::string modelName;
//std::string formFactor;
//std::string yearOfIssue;
//float screenSize;
//float price;

Phone PhoneManager::getNewPhoneData()
{
	Phone phone;
	std::string inputString;
	float inputFloat;

	std::cout << "Enter brand name:" << std::endl;
	std::cin >> inputString;
	phone.setBrand(inputString);

	std::cout << "Enter model name:" << std::endl;
	std::cin >> inputString;
	phone.setModel(inputString);

	std::cout << "Enter form factor:" << std::endl;
	std::cin >> inputString;
	phone.setForm(inputString);

	std::cout << "Enter year of issue:" << std::endl;
	std::cin >> inputString;
	phone.setYear(inputString);

	std::cout << "Enter screen size:" << std::endl;
	std::cin >> inputFloat;
	phone.setSize(inputFloat);

	std::cout << "Enter price:" << std::endl;
	std::cin >> inputFloat;
	phone.setPrice(inputFloat);

	phone.setId(getNewPhoneId());
	
	return phone;
}
