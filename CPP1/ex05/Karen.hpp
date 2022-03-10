/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:26:44 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/09 17:30:49 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{

	public:

		Karen(void);
		~Karen(void);

		void    complain(std::string level);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

};

# endif
