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
	void setId();
	void setBrand(std::string brand);
	void setModel(std::string model);
	void setFoam(std::string foam);
	void setYear(std::string year);
	void setSize(float size);
	void setPrice(float price);

	int getId();
	std::string getBrand();
	std::string getModel();
	std::string getFoam();
	std::string getYear();
	float getSize();
	float getPrice();
};

