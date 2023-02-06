#pragma once
#include<string>

class Phone
{
	unsigned int id;
	std::string brandName;
	std::string modelName;
	std::string formFactor;
	std::string yearOfIssue;
	float screenSize;
	float price;

public:
	void setId(int sendId);
	void setBrand(std::string brand);
	void setModel(std::string model);
	void setForm(std::string form);
	void setYear(std::string year);
	void setSize(float size);
	void setPrice(float sendPrice);

	int getId();
	std::string getBrand();
	std::string getModel();
	std::string getForm();
	std::string getYear();
	float getSize();
	float getPrice();
};

