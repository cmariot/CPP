/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:26 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:20:03 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_HPP
#define SAMPLE1_HPP

/* Declaration of the Sample class */

class Sample1
{
	public:
		
		Sample1(void);			//Constructor
		~Sample1(void);			//Destructor

		int		public_foo;
		void	public_bar(void) const;

	private:

		int		_private_foo;
		void	_private_bar(void) const;
};

#endif