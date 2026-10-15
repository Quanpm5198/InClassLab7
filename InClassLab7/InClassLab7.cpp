// InClassLab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
int main()
{
	int totalInches;


	std::cout << "Enter the total number of inches: " << std::endl;
	std::cin >> totalInches;
	const int NUMBER_OF_INCHES_IN_A_FOOT = 12;


	std::cout << totalInches << " is equal to " << totalInches / NUMBER_OF_INCHES_IN_A_FOOT << " feet" << std::endl;


	std::cout << " and " << totalInches % NUMBER_OF_INCHES_IN_A_FOOT << " inches" << std::endl;

}

