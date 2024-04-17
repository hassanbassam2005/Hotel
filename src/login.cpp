#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

static bool isLoggedInEmployee()
{
	static bool loggedInEmployee = false;
	std::string userName, password, name, pass;

	system("cls");
	std::cout << "Login in : \n";
	std::cout << "enter your name : \n";
	std::getline(std::cin, userName);
	std::cout << "enter the password : \n";
	std::getline(std::cin, password);

	std::ifstream input("Employee.txt");
	while (input >> name >> pass)
	{
		if (name == userName && pass == password)
		{
			loggedInEmployee = true;
			system("cls");
			std::cout << "Your login is successful, " + userName + " :)\n";
			break;
		}

	}
	input.close();

	if (!loggedInEmployee)
	{
		std::cout << "Please check your user name and password\n";
	}

	return loggedInEmployee;
}

static bool isLoggedInUser()
{
	static bool loggedInEmployee = false;
	std::string userName, password, name, pass;

	system("cls");
	std::cout << "Login in : \n";
	std::cout << "enter your name : \n";
	std::getline(std::cin, userName);
	std::cout << "enter the password : \n";
	std::getline(std::cin, password);

	std::ifstream input("User.txt");
	while (input >> name >> pass)
	{
		if (name == userName && pass == password)
		{
			loggedInEmployee = true;
			system("cls");
			std::cout << "Your login is successful, " + userName + " :)\n";
			break;
		}

	}
	input.close();

	if (!loggedInEmployee)
	{
		std::cout << "Please check your user name and password\n";
	}

	return loggedInEmployee;
}
