#include <iostream>
#include "Greeter.h"


std::string Greeter::greet(std::string name) {
	std::string val = "Здравствуйте, " + name + "!";
	return val;
}