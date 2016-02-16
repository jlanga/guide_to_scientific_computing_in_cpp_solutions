/*
 * main.cpp
 *
 *  Created on: Feb 7, 2016
 *      Author: work
 */

#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
#include <cstdlib>

double h(0.0);
int N(0);

double x(0.0), y(1.0);

int main(int argc, char* argv[])
{
	N = atoi(argv[1]);
	assert(N > 1);

	std::ofstream write_output("xy.dat");
	assert(write_output.is_open());

	h = 1.0 / ((double)(N));

	for(int i(0); i< N; i++)
	{
		x = i * h;
		y = y / (1+h);

		write_output << x << "\t" << y << "\n";
		write_output.flush();
	}

	write_output.close();
}
