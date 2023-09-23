// cmusco_hw4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Christopher Musco 9/22/2023 Assignment 4 
// this program asks you to enter the total ammount of snowfall for the winter months and then will calculate the total snowfall in inches and feet

#include <iostream>
#include <string>
using namespace std;


int main()
{
	

	std::cout << "Enter December total snowfall: ";
	float decSnowfallInches;
	std::cin >> decSnowfallInches;

	std::cout << "Enter January total snowfall: ";
	float janSnowfallInches;
	std::cin >> janSnowfallInches;
		
	std::cout << "Enter Febuary total snowfall: ";
	float febSnowfallInches;
	std::cin >> febSnowfallInches;

	std::cout << "Enter March total snowfall: ";
	float marSnowfallInches;
	std::cin >> marSnowfallInches;
		



	
	
	
	
	float inchesInFeet = 12.0;
	
	float totalSnowfallInches = decSnowfallInches + janSnowfallInches + febSnowfallInches + marSnowfallInches;
	float totalSnowfallFeet = totalSnowfallInches / inchesInFeet;

	std::cout << "totalsnowfallinches: " << totalSnowfallInches << " inches";
	std::cout << "\ntotalsnowfallfeet: " << totalSnowfallFeet<< " feet";



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
