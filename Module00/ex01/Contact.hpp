/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:54:16 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/14 16:40:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact
{
	public:

		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

		Contact(void);	//Constructeur par defaut
		Contact(int index, std::string fn, std::string ln,std::string nn, std::string pn, std::string ds);
		~Contact(void);	//Destructeur
};

#endif
