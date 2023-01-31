/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:50:12 by lkavalia          #+#    #+#             */
/*   Updated: 2023/01/31 20:52:28 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"
#include "Contact_class.hpp"
#include <string.h>
#include <cstdlib>

PhoneBook::PhoneBook(void):_nbr_contacts(0)
{
//	std::cout << "constructor activated!" << std::endl;
	set_indexes();
	return;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "destructor activated!" << std::endl;
	return;
}

//----	Getters	-------------------------------------------------------------------

int	PhoneBook::get_nbr_cont(void)const
{
	return (_nbr_contacts);
}

void	PhoneBook::add(void)
{
	std::string	info;

	std::cout << "adding contact:" << std::endl;
	std::cout << "Enter first name:" << std::endl;
	amount[_nbr_contacts % 8].add_first_name();
	std::cout << "Enter the last name:" << std::endl;
	amount[_nbr_contacts % 8].add_last_name();
	std::cout << "Enter the nickname:" << std::endl;
	amount[_nbr_contacts % 8].add_nickname();
	std::cout << "Enter the phone number:" << std::endl;
	amount[_nbr_contacts % 8].add_phone_n();
	std::cout << "Enter the darkest secret:" << std::endl;
	amount[_nbr_contacts % 8].add_dark_secret();
	_nbr_contacts++;
}

void	PhoneBook::set_indexes(void)
{
	for (int i = 0; i < 8; i++)
		amount[i].set_index(i + 1);
}

bool incorect_index(std::string index, int c, int *nbr)
{
	if (index[0] == '\0' || index[0] < '1' || index[0] > '8')
	{
		std::cout << "\033[0;31mProvided index is incorrect! \033[0m" << std::endl;
		return (true);
	}
	if (index[1] != '\0')
	{
		std::cout << "\033[0;31mProvided index is incorrect! \033[0m" << std::endl;
		return (true);
	}
	if (c < 8)
	{
		if ((index[0] - 48) > c)
		{
			std::cout << "\033[0;31mProvided index is incorrect! \033[0m" << std::endl;
			return (true);
		}
	}
	*nbr = index[0] - 49;
	return (false);
}

std::string	divide(std::string input)
{
	return (input.size() > 10 ? ".|" : " |");
}

void	PhoneBook::show(void)
{
	std::string index;
	int nbr = 0;
	for(int i = 0; i < _nbr_contacts && i < 8; i++)
	{
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << amount[i % 8].get_index() << " |";
		std::cout << std::setw(10) << amount[i % 8].get_f_name().substr(0, 9) <<  divide(amount[i % 8].get_f_name());
		std::cout << std::setw(10) << amount[i % 8].get_l_name().substr(0,9) << divide(amount[i % 8].get_l_name());
		std::cout << std::setw(10) << amount[i % 8].get_nickname().substr(0,9) << divide(amount[i % 8].get_nickname());
		std::cout << std::endl;
	}
	//Second prompt part to search for the specific contact
	do
	{
		std::cout << "Please put in the index of the contact:" << std::endl
				  << "> ";
		std::getline(std::cin, index);
		if (std::cin.eof() == 1)
		{
			std::cout << "\033[0;31mCTRL-D was activated\033[0m" << std::endl;
			std::cin.clear();
			exit (1);
		}

	} while (incorect_index(index, _nbr_contacts, &nbr) == true);
	std::cout << "First name: " << amount[nbr].get_f_name() << std::endl;
	std::cout << "Last name: " << amount[nbr].get_l_name() << std::endl;
	std::cout << "Nickname: " << amount[nbr].get_nickname() << std::endl;
	std::cout << "Phone number: " << amount[nbr].get_phone_n() << std::endl;
	std::cout << "Darkest secret: " << amount[nbr].get_darkest_s() << std::endl;
	std::cout << "----	The end of the contact ----" << std::endl;
}