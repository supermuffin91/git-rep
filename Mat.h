#include "stdafx.h"
#include <iostream>
#include <string>

class Dog 
{
private:
	std::string name;
	int age;
public:
	Dog (const std::string new_name, const int new_age);
	void bark ();
	Dog ();
	~Dog();
	void setName(const std::string new_name);
	void setAge (const int new_age);
};