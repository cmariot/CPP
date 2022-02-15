/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:47:39 by cmariot           #+#    #+#             */
/*   Updated: 2022/02/15 13:50:17 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_PHONEBOOK_H
# define MY_AWESOME_PHONEBOOK_H

# include <iostream>

# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <iostream>

typedef struct s_input {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
}	t_input;

void	display_value(std::string str);

#endif
