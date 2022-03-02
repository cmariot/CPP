/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:56:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 11:45:08 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void	add(void);
		void	search(void);

	private:
		Contact	_repertoire[8];
		//int		_number_of_contact;

};

# endif
