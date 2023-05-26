#include "User.h"

User::User()
{
	id = idx++;
	name = "Hans";
}

User::User(std::string name)
{
	id = idx++;
	this->name = name;
}

void User::Print()
{
	std::cout << "Name: " << name << "\t" << "ID: " << id;
}
