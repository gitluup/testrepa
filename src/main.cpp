#include <iostream>

#include "config/config.h"
#include "calc.h"



int main()
{
	std::cout << "tutorial version " << TUTORIAL_VERSION_MAJOR << "."
		<< TUTORIAL_VERSION_MINOR << std::endl;
	std::cout << "hello world ***" << std::endl;

	Calc calc;

	//std::cout << "6 + 7 = " << addadd(6, 7) << std::endl;
	std::cout << "5 + 8 = " << calc.Add(5, 8) << std::endl;

	return 0;
}
