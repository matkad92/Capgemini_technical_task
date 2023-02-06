#include "PhoneManager.h"
#include <iostream>
#include <algorithm>

int PhoneManager::getNewPhoneId()
{
	return (storedPhones.empty())? 1 : storedPhones.back().getId()+1;
}

void PhoneManager::addPhone()
{
	Phone phone = getNewPhoneData();
	storedPhones.push_back(phone);
	std::cout << "Phone had been added!"<<std::endl;
	getchar();
}

void PhoneManager::printAllPhones()
{

	for (auto iter: storedPhones)
	{
		std::cout << iter.getId() << std::endl;
		std::cout << iter.getBrand() << std::endl;
		std::cout << iter.getModel() << std::endl;
		std::cout << iter.getForm() << std::endl;
		std::cout << iter.getYear() << std::endl;
		std::cout << iter.getPrice() << std::endl;
	}
}

void PhoneManager::deletePhone()//some safety mechanisms should be added
{
	int enteredId;
	std::cout << "Enter id of phone You want to delete:" << std::endl;
	std::cin >> enteredId;
	auto iter = storedPhones.begin();
	while (iter != storedPhones.end())
	{
		if (iter->getId() == enteredId)
		{
			storedPhones.erase(iter);
			std::cout << "erased!" << std::endl;
			getchar();
			break;
		}
		iter++;
	}

}

void PhoneManager::printRaport()
{
	std::cout << "Phones by the same brand:" << std::endl;
	printByBrand();
}


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

void PhoneManager::printByBrand()
{
	auto storedPhonessorted = storedPhones;

	std::sort(storedPhonessorted.begin(), storedPhonessorted.end(), [](Phone& lhs, Phone& rhs) {return lhs.getBrand() < rhs.getBrand(); });


	for (auto iter : storedPhonessorted)
	{
		std::cout << iter.getId() << std::endl;
		std::cout << iter.getBrand() << std::endl;
		std::cout << iter.getModel() << std::endl;
		std::cout << iter.getForm() << std::endl;
		std::cout << iter.getYear() << std::endl;
		std::cout << iter.getPrice() << std::endl;
	}
}
