/*
 * main.cpp
 *
 *  Created on: 23/01/2016
 *      Author: jlanga
 */
#include <iostream>

int a(34), b(58), c(57), d(32), e(43);

int main(int argc, char argv[])
{
	int sum = a + b + c + d + e;
	double dsum = ((double) (sum));

	std::cout << dsum / 5.0 << "\n";

	return 0;
}



