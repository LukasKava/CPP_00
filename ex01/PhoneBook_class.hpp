/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:04:25 by lkavalia          #+#    #+#             */
/*   Updated: 2023/01/25 21:39:33 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact_class.hpp"
#include <iomanip>

class PhoneBook
{
	int	_nbr_contacts;
	public:
		Contact amount[8];
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	show(void);
		void	set_indexes(void);
		int		get_nbr_cont(void)const;
};

#endif