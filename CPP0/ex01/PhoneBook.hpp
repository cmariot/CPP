/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:56:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/05 12:11:22 by cmariot          ###   ########.fr       */
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
		
		int		add(void);
		int		search(void);

	private:

		Contact			_repertoire[8];
		static int		_number_of_contact;
		static int		_contact_index;


		std::string		_column(std::string str);
		int				_get_index(std::string str);

};

# endif
