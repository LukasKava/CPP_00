/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:06:42 by lkavalia          #+#    #+#             */
/*   Updated: 2023/01/31 18:16:13 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_class.hpp"

int main(int argc, char *argv[])
{
	(void)argc;
	(void)**argv;
	if (argc != 1)
	{
		std::cout << "\033[0;31mTo many command line arguments!\033[0m" << std::endl;
		return (1);
	}
	PhoneBook	phonebook;
	std::string	cmd;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Welcome to PhoneBook.exe!" << std::endl;
	std::cout << "You can type one of the following commands\n: ADD SEARCH EXIT" << std::endl;
	while (std::getline(std::cin, cmd) && cmd != "EXIT")
	{
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.show();
		else
			std::cout << "\033[0;31mBad command! Please try again!\033[0m" << std::endl;
		std::cout << "You can type one of the following commands\n: ADD SEARCH EXIT" << std::endl;
	}
	return (0);
}