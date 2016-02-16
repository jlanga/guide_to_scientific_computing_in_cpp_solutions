/*
 * ex02.cpp
 *
 *  Created on: 23/01/2016
 *      Author: jlanga
 */
#include <iostream>

int main(int argc, char* argv[])
{

	int a=0;
	int b=0;

	std::cout << "Type a number: ";
	std::cin  >> a;

	std::cout << "Type another number: ";
	std::cin  >> b;

	std::cout << "The product of " << a << " and " << b << " is " << a*b << "\n";
	std::cout.flush();
	return 0;
}
