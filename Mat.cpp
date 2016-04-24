#include "Mat.h"
#include "stdafx.h"
#include <string>

Dog::Dog(const std::string new_name, const int new_age)
{
	name = new_name; age = new_age;
};
void Dog::bark() {std::cout << name << std::endl;};