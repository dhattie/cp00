
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->greetings();
}

Phonebook::~Phonebook(void){}

void Phonebook::greetings(void)
{
	std::cout <<"====================HI====================" << std::endl;
	std::cout << "== Welcome to phonebook ==" << std::endl;
}

void Phonebook::enterCommandsMessage(void)
{
	std::cout << "\n==== Allowing commands are ====" << std::endl;
	std::cout << "===== \033[1;32mADD\033[0m == \033[1;32mSEARCH\033[0m == \033[1;32mEXIT\033[0m =====" << std::endl;
	std::cout << std::endl;
}

int Phonebook::addContact(int id)
{
	std::cout << "\033[1;33mI NEED YOUR:\033[0m\n";
	std::cout << "FIRST NAME, LAST NAME, NICKNAME, PHONE NUMBER and...\nYOUR DARKEST SECRET!!!\n";
	this->_contacts[id].createContact();
	if (_contacts[id].isEmptyField())
	{
		std::cout << "Create failed!\n";
		return (id);
	}
	else
	{
		std::cout << "Contact " << id + 1 << " added.\n";
		return (id + 1);
	}
}

void Phonebook::searchContact(void)
{
	int			id;
	std::string	selected;

	id = -1;
	std::cout << "--------------------------------------------\n";
	std::cout << "|   index  |first name|last name | nickname |\n";
	std::cout << "--------------------------------------------\n";
	while (++id < SIZE)
		if (!this->_contacts[id].isEmptyField())
			this->_contacts[id].printContact(id);
	std::cout << "--------------------------------------------\n";
	std::cout << std::endl;
	std::cout << "Which one would you like to see?\n";
	std::getline(std::cin, selected);
	if (std::cin.eof())
	{
		std::cout << "Tricky!\n";
		return;
	}
	if (std::atoi(selected.c_str()) < 1 || std::atoi(selected.c_str()) > SIZE)
	{
		std::cout << "There is nobody here...\n";
		return;
	}
	this->printHim(std::atoi(selected.c_str()) - 1);
}

void Phonebook::printHim(int id)
{
	if (this->_contacts[id].isEmptyField())
		std::cout << "There is nobody here...\n";
	else
		_contacts[id].printFullContact();
}
