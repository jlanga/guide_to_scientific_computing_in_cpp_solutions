/*
 * main.cpp
 *
 *  Created on: 23/01/2016
 *      Author: jlanga
 */
#include <iostream>
#include <cmath>

double A[2][2] = {{0, 0}, {0,  0}};
double B[2][2] = {{1, 0}, {0,  1}};
double C[2][2] = {{1, 0}, {0, -1}};
double D[2][2] = {{1, 1}, {1,  1}};
double E[2][2], F[2][2];

int main(int argc, char* argv[])
{
	E[0][0] = A[0][0] + B[0][0];
	E[1][0] = A[1][0] + B[1][0];
	E[0][1] = A[0][1] + B[0][1];
	E[1][1] = A[1][1] + B[1][1];

	F[0][0] = A[0][0] * B[0][0] +  A[0][1] * B[0][1];
	F[1][0] = A[0][0] + B[1][0] +  A[0][1] * B[1][1];
	F[0][1] = A[1][0] + B[0][0] +  A[1][1] * B[0][1];
	F[1][1] = A[1][0] + B[1][0] +  A[1][1] * B[1][1];

	std::cout << "E values\n";
	std::cout << E[0][0] << " ," << E[0][1] << "\n";
	std::cout << E[1][0] << " ," << E[1][1] << "\n";

	std::cout << "F values\n";
	std::cout << F[0][0] << " ," << F[0][1] << "\n";
	std::cout << F[1][0] << " ," << F[1][1] << "\n";

	return 0;
}

