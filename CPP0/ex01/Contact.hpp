/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:54:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/04 11:14:10 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		int update(void);
		
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nick_name(void) const;
		std::string get_phone_number(void) const;
		std::string get_darkest_secret(void) const;

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_darkest_secret;

		void _set_first_name(void);
		void _set_last_name(void);
		void _set_nick_name(void);
		void _set_phone_number(void);
		void _set_darkest_secret(void);

};

# endif
