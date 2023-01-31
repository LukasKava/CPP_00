/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:08:57 by lkavalia          #+#    #+#             */
/*   Updated: 2023/01/25 22:28:20 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include "PhoneBook_class.hpp"
#include <iostream>
#include <string>
#include <ctype.h>

class	Contact
{
	int			_index;
	std::string	_first_n;
	std::string	_last_n;
	std::string	_nickname;
	std::string	_phone_nbr;
	std::string	_darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		std::string	get_f_name(void)const;
		std::string	get_l_name(void)const;
		std::string	get_nickname(void)const;
		std::string get_phone_n(void)const;
		std::string	get_darkest_s(void)const;
		int			get_index(void)const;
		void		set_index(int i);
		void		add_first_name();
		void		add_last_name();
		void		add_nickname();
		void		add_phone_n();
		void		add_dark_secret();
};

#endif