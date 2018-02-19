#include <iostream>

#include "config.h"
#include "calc.h"


int main()
{
	std::cout << "tutorial version " << TUTORIAL_VERSION_MAJOR << "."
		<< TUTORIAL_VERSION_MINOR << std::endl;
	std::cout << "hello world ***" << std::endl;

	Calc calc;

	std::cout << "2 + 5 = " << calc.Add(2, 5) << std::endl;

	return 0;
}
