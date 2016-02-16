/*
 * main.cpp
 *
 *  Created on: Feb 11, 2016
 *      Author: work
 */
#include <iostream>

/* 4.4
 * Write code that dynamically allocates memory for three 2 × 2 matrices of
 * double precision floating point numbers, A, B, C, and assigns values to the
 * entries of A and B. Let C = A + B. Extend your code so that it calculates
 * the entries of C, and then prints the entries of C to screen. Finally,
 * deallocate memory. Again, check you have deallocated memory correctly by
 * using a for loop as in the previous exercise.
*/

int main(int argc, char* argv[])
{
	int n=3, m=3;
	double** A;
	double** B;
	double** C;

	A = new double* [n];
	for(int i(0); i < n; i++)
	{
		A[i] = new double [m];
		for(int j(0); j < m; j++)
		{
			A[i][j] = 12;
		}
	}

	B = new double* [n];
	for(int i(0); i < n; i++)
	{
		B[i] = new double [m];
		for(int j(0); j < m; j++)
		{
			B[i][j] = 42;
		}
	}

	C = new double* [n];
	for(int i(0); i < n; i++)
	{
		C[i] = new double [m];
	}

	for(int i(0); i < n; i++)
	{
		for(int j(0); j < m; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	std::cout << C[0][0] << " " << C[0][1] << "\n";
	std::cout << C[1][0] << " " << C[1][1] << "\n";

	for (int i = 0; i < n; i++){
		delete[] A[i];
		delete[] B[i];
		delete[] C[i];
	}

	delete[] A;
	delete[] B;
	delete[] C;

	return 0;
}
