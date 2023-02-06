#include "Phone.h"

void Phone::setId(int sendId)
{
	id = sendId;
}

void Phone::setBrand(std::string brand)
{
	brandName = brand;
}

void Phone::setModel(std::string model)
{
	modelName = model;
}



void Phone::setForm(std::string form)
{
	formFactor = form;
}

void Phone::setYear(std::string year)
{
	yearOfIssue = year;
}

void Phone::setSize(float size)
{
	screenSize = size;
}

void Phone::setPrice(float sendPrice)
{
	price = sendPrice;
}


int Phone::getId()
{
	return 0;
}

//unsigned int id;
//std::string brandName;
//std::string modelName;
//std::string formFactor;
//std::string yearOfIssue;
//float screenSize;
//float price;

std::string Phone::getBrand()
{
	return brandName;
}

std::string Phone::getModel()
{
	return modelName;
}

std::string Phone::getForm()
{
	return formFactor;
}

std::string Phone::getYear()
{
	return yearOfIssue;
}

float Phone::getSize()
{
	return screenSize;
}

float Phone::getPrice()
{
	return price;
}
