/*
 * main.cpp
 *
 *  Created on: Feb 11, 2016
 *      Author: work
 */

#include <iostream>

/*
 * 4.2 Assign values to two integer variables. Swap the values stored by these variables using only
 * pointers to integers.
 * */



int main(int argc, char* argv[])
{
	int i(5), j(10);

	std::cout << "i=" << i << " and j=" << j << "\n";

	int * p_i = &i;
	int * p_j = &j;
	int * temp = new int;

	*temp = *p_i;
	*p_i = *p_j;
	*p_j = *temp;

	i = *p_i;
	j = *p_j;

	std::cout << "i=" << i << " and j=" << j << "\n";
}
