/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:56:34 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/15 13:10:22 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:

		Contact	repertoire[8];

		PhoneBook(void);	//Constructeur
		~PhoneBook(void);	//Destructeur

		void	add(Contact new_contact, int index);
		void	display_contact_list(int number_of_contact) const;
		void	display_contact_info(std::string input, int number_of_contacts) const;
};

#endif
