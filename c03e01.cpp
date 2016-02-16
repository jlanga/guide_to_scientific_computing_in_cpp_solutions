/*
 * main.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: Jorge Langa
 */

#include <iostream>
#include <fstream>
#include <cassert>

int main(int argc, char* argv[])
{
	double x[4] = {0.0, 1.0, 1.0, 0.0};
	double y[4] = {0.0, 0.0, 1.0, 1.0};

	// 3. Extend the code so that the precision is set to 10 signifcant figures, the
	//    output is in scientific notation, and plus signs are shown for positive
	//    numbers.

	std::ofstream write_output("x_and_y.dat");
	assert(write_output.is_open());
        
	write_output.setf(std::ios::scientific);
	write_output.setf(std::ios::showpos);
	write_output.precision(10);
	
	for (int i=0; i < 4 -1 ; i++)
	{
		write_output << x[i] << "\t";
	}
	write_output << x[3] << "\n";
	write_output.flush();

	for (int i=0; i < 4-1; i++)
	{
		write_output << y[i] << "\t";
	}
	write_output << y[3] << "\n";
	write_output.flush();

	write_output.close();

	return 0;

}



