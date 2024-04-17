@ - 1, 44 + 1 @@
#include <iostream>

void printHelpEmployee()
{
	std::cout << "write the following :\n";
	std::cout << ".Room type : to enter the type of rooms\n";
	std::cout << ".Room number : to enter the number of each room\n";
	std::cout << ".Room price : to enter the price of each room\n";
	std::cout << ".Quit : to quit the program\n";
}

void MainMenu()
{
	std::cout << "write the following :\n";
	std::cout << ".Register user : to create a account as user\n";
	std::cout << ".Register employee : to create a account as Employee\n";
	std::cout << ".Login user : to login if you have an account\n";
	std::cout << ".Login employee : to login if you have an account\n";
	std::cout << ".Quit : to quit the program\n";
}

static void Version()
{
	std::cout << "Welcome to MY HOTEL\t\t\tVersion 1.0.0\n";
}

void printHelpUser()
{
	std::cout << "write the following :\n";
	std::cout << ".Room search : to search the number of the room\n";
	std::cout << ".Room book : to book a sertain number of room\n";
	std::cout << ".Room cancle : to cancle the room booking\n";
	std::cout << ".Quit : to quit the program\n";
}

void outerMessage()
{
	std::cout << "OKK GOODBYE\n";
}

void Error()
{
	std::cout << "please select from the menu only :)\n";
}
#pragma once
