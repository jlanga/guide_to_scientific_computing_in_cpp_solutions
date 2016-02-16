/*
 * main.cpp
 *
 *  Created on: Feb 11, 2016
 *      Author: work
 */
#include <iostream>


/*
 * 4.1 Write code that declares an integer i to take the value 5. Declare a pointer to an integer
 * p_j, and store the address of i in this pointer.
 *
 * Multiply the value of the variable i by 5 by using a line of code that only uses the pointer
 * variable.
 *
 * Declare another pointer to an integer p_k and use the new keyword to allocate a location
 * in memory that this pointer stores. Then store the contents of the variable i in this location
 * */

int main(int argc, char* argv[])
{
	int i(5);
	int* p_j;
	p_j = &i;

	std::cout << "i equals " << i << " and it is stored in " << p_j << "\n";

	std::cout << "i*5 equals " << *p_j * 5 << "\n";

	int* p_k;
	p_k = new int;
	*p_k = i;

	std::cout << "k equals " << *p_k << " and it is stored in " << p_k << "\n";

	delete p_k;

	std::cout << "p_k exists in " << p_k << " with value " << *p_k << "\n";

	return 0;
}
