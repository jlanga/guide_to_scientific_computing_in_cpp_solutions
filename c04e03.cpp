/*
 * main.cpp
 *
 *  Created on: Feb 11, 2016
 *      Author: work
 */

#include <iostream>

/*
 * 4.3 Write code that allocates memory dynamically to two vectors of double
 * precision floating point numbers of length 3, assigns values to each of the
 * entries, and then de-allocates the memory before the code terminates.
 *
 * Extend this code so that it calculates the scalar (dot) product of these
 * vectors and prints it to screen before the memory is de-allocated.
 *
 * Put the  allocation of memory, calculation and deallocation of memory inside a for
 * loop that runs 1,000,000,000 times: if the memory is not deallocated properly your
 * code will use all available resources and your computer may struggle.
*/

int main(int argc, char* argv[])
{
	for(int k=0; k < 1000000; k++){
		double* x = new double[3];
		double* y = new double[3];
		for(int i=0; i < 3; i++) x[i] = i;
		for(int i=0; i < 3; i++) y[i] = 3.0 - i;
		delete[] x;
		delete[] y;
	}
	return 0;
}
