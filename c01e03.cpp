/*
 * main.cpp
 *
 *  Created on: 23/01/2016
 *      Author: jlanga
 */
#include <iostream>
#include <cmath>

double v1[3] = {1.0, 2.0, 3.0}, v2[3] = {3.0, 2.0, 1.0};

int main(int argc, char* argv[])
{
	double crossprod = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
	double norm = sqrt(crossprod);

	std::cout << "The crossproduct is " << crossprod << " and the norm is " << norm << "\n";

	return 0;
}


