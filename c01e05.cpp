/*
 * main.cpp
 *
 *  Created on: 23/01/2016
 *      Author: jlanga
 */
#include <iostream>
#include <string>

std::string given_name = "";
std::string last_name  = "";

int main(int argc, char** argv[])
{
	std::cout << "Enter your given name: ";
	std::cin  >> given_name;

	std::cout << "Enter your last name: ";
	std::cin  >> last_name;

	std::cout << "Your name is " << given_name << " " << last_name << ".\n";

	return 0;
}




