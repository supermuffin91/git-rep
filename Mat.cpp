#include "Mat.h"
#include "stdafx.h"
#include <string>

Dog::Dog(const std::string new_name, const int new_age)
{
	name = new_name; age = new_age;
};
void Dog::bark() {std::cout << name << std::endl << age << std::endl;};
Dog::Dog () {name = NULL; age = 0;};
void Dog::setName(const std::string new_name) {name = new_name;};
void Dog::setAge (const int new_age) {age = new_age;};