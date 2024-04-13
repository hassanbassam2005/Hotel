#include <string>

enum class Selection
{
	REGISTERUSER,
	REGISTEREMPLOYEE,
	LOGINUSER,
	LOGINEMPLOYEE,
	QUIT,
	ERROR
};

enum class EmployeeSelection
{
	HELP,
	ROOMTYPE,
	ROOMNUMBER,
	REMOVEROOM,
	ROOMPRICE,
	GOTOUSER,
	ERROR
};

enum class UserSelection
{
	HELP,
	ROOMSEARCH,
	ROOMBOOK,
	ROOMCANCLE,
	ERROR
};

static EmployeeSelection Employeehash(const std::string& str)
{
	if (str == ".Help")
	{
		return EmployeeSelection::HELP;
	}
	else if (str == ".Room type")
	{
		return EmployeeSelection::ROOMTYPE;
	}
	else if (str == ".Room number")
	{
		return EmployeeSelection::ROOMNUMBER;
	}
	else if (str == ".Room price")
	{
		return EmployeeSelection::ROOMPRICE;
	}
	else if (str == ".Go user")
	{
		return EmployeeSelection::GOTOUSER;
	}
	else if (str == ".Remove room")
	{
		return EmployeeSelection::REMOVEROOM;
	}
	return EmployeeSelection::ERROR;
}

static Selection Hash(const std::string& str)
{
	if (str == ".Register user")
	{
		return Selection::REGISTERUSER;
	}
	else if (str == ".Login user")
	{
		return Selection::LOGINUSER;
	}
	else if (str == ".Register employee")
	{
		return Selection::REGISTEREMPLOYEE;
	}
	else if (str == ".Login employee")
	{
		return Selection::LOGINEMPLOYEE;
	}
	else if (str == ".Quit")
	{
		return Selection::QUIT;
	}
	return Selection::ERROR;
}

static UserSelection Userhash(const std::string& str)
{
	if (str == ".Help")
	{
		return UserSelection::HELP;
	}
	else if (str == ".Room search")
	{
		return UserSelection::ROOMSEARCH;
	}
	else if (str == ".Room book")
	{
		return UserSelection::ROOMBOOK;
	}
	else if (str == ".Room cancle")
	{
		return UserSelection::ROOMCANCLE;
	}
	else
	{
		return UserSelection::ERROR;
	}
}