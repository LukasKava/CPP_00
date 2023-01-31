/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:09:53 by lkavalia          #+#    #+#             */
/*   Updated: 2023/01/31 18:28:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"
#include "Contact_class.hpp"

//Constructor
Contact::Contact(void):_index(0)
{
	//std::cout << "contact: constructor activated!" << std::endl;
	return;
}

//Destructor
Contact::~Contact(void)
{
	//std::cout << "contact: destructor activated!" << std::endl;
	return;
}

/**
 * FUNCTION: (empty_field) checks if the string is not empty.
 * RETURN_VALUE:
 * false: if string is not empty or not filled only with spaces.
 * true: if the string is filled with spaces.
 */
bool	empty_field(std::string	sheep)
{
	if (sheep[0] == '\0')
		return(true);
	else
	{
		for (int i = 0; sheep[i] != '\0'; i++)
		{
			if (sheep[i] != ' ' && sheep[i] !='\t')
				return (false);
		}
	}
	return (true);
}

//----	Getters	---------------------------------------------------------------
int	Contact::get_index(void)const
{
	return (this->_index);
}

std::string	Contact::get_f_name(void)const
{
	return (this->_first_n);
}

std::string	Contact::get_l_name(void)const
{
	return	(this->_last_n);
}

std::string	Contact::get_nickname(void)const
{
	return	(this->_nickname);
}

std::string	Contact::get_phone_n(void)const
{
	return	(this->_phone_nbr);
}

std::string	Contact::get_darkest_s(void)const
{
	return	(this->_darkest_secret);
}

//---- Setters	---------------------------------------------------------------
void	Contact::set_index(int i)
{
	//std::cout << "index: " << std::endl;
	_index = i;
}

void	Contact::add_first_name(void)
{
	std::string	first_name;

	while (std::getline(std::cin, first_name))
	{
		if (empty_field(first_name) == false)
		{
			this->_first_n = first_name;
			break ;
		}
		else
			std::cout << "Please enter the first_name!" << std::endl;
		
	}
}

void	Contact::add_last_name(void)
{
	std::string	last_name;

	while (std::getline(std::cin, last_name))
	{
		if (empty_field(last_name) == false)
		{
			this->_last_n = last_name;
			break;
		}
		else
			std::cout << "Please enter the last_name!" << std::endl;
	}
}

void	Contact::add_nickname(void)
{
	std::string	nickname;

	while (std::getline(std::cin, nickname))
	{
		if (empty_field(nickname) == false)
		{
			this->_nickname = nickname;
			break;
		}
		else
			std::cout << "Please enter the nickname!" << std::endl;
	}
}

void	Contact::add_phone_n(void)
{
	std::string	phone_nbr;

	while (std::getline(std::cin, phone_nbr))
	{
		if (empty_field(phone_nbr) == false)
		{
			this->_phone_nbr = phone_nbr;
			break;
		}
		else
			std::cout << "Please enter the phone number!" << std::endl;
	}
}

void	Contact::add_dark_secret(void)
{
	std::string	darkest_secret;

	while (std::getline(std::cin, darkest_secret))
	{
		if (empty_field(darkest_secret) == false)
		{
			this->_darkest_secret = darkest_secret;
			break;
		}
		else
			std::cout << "Please enter the darkest secret!" << std::endl;
	}
}