/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:24:30 by lkavalia          #+#    #+#             */
/*   Updated: 2023/01/16 18:23:08 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char *argv[])
{
	int	len = 0;
	if (argc != 1)
	{
		for (int i = 1; i <= (argc - 1); i++)
		{
			len = std::strlen(argv[i]);
			for (int x = 0; x < len; x++)
			{
				std::cout << (char)std::toupper(argv[i][x]);
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}