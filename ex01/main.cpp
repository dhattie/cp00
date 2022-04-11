
#include "Phonebook.hpp"

int	main()
{
	Phonebook		phone;
	std::string		str;
	int				id;

	id = 0;
	while (str != "EXIT")
	{
		phone.enterCommandsMessage();
		std::cout << "Please, enter your command\n>: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << "Try again next time..." << std::endl;
			break;
		}
		else if (str == "ADD")
		{
			id = phone.addContact(id);
			if (id == SIZE)
				id = 0;
		}
		else if (str == "SEARCH")
			phone.searchContact();
	}
	std::cout << "This progrham has been finished..." << std::endl;
	return (0);
}