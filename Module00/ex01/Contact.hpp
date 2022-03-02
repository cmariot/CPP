/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:36:11 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/26 12:08:50 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		~Contact(void);

		void set_first_name(std::string buf);
		void set_last_name(std::string buf);
		void set_nick_name(std::string buf);
		void set_phone_number(std::string buf);
		void set_darkest_secret(std::string buf);
		
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nick_name(void) const;
		std::string get_phone_number(void) const;
		std::string get_darkest_secret(void) const;

	protected:

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_darkest_secret;

};

# endif
