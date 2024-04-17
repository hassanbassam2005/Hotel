#include <iostream>
#include <fstream>
#include <string>

static bool RegisterEmployee()
{
	std::string name, pass;
	system("cls");
	std::cout << "registing : \n";
	std::cout << "\nenter your name please : ";
	std::getline(std::cin, name);
	std::cout << "\nenter your password : ";
	std::getline(std::cin, pass);
	std::ofstream f1("Employee.txt", std::ios::app);
	f1 << name << " " << pass;
	std::cout << "registiration succefully!\nPlease login :)\n";
	return true;
}

static bool RegisterUser()
{
	std::string name, pass;
	system("cls");
	std::cout << "registing : \n";
	std::cout << "\nenter your name please : ";
	std::getline(std::cin, name);
	std::cout << "\nenter your password : ";
	std::getline(std::cin, pass);
	std::ofstream f1("User.txt", std::ios::app);
	f1 << name << " " << pass;
	std::cout << "registiration succefully!\nPlease login :)\n";
	return true;
}