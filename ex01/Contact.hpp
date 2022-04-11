//
// Created by Dayna Hattie on 10/04/2022.
//

#pragma once
# include <iostream>
# include <iomanip>

# define CONT_LENGTH 10

class Contact
{
public:
	Contact(void);
	~Contact(void);

	void	createContact(void);
	bool	isEmptyField(void);
	void	printContact(int id);
	void	printFullContact(void);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkSecret;
};