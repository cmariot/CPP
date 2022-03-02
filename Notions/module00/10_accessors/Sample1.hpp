/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:26 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 16:58:26 by cmariot          ###   ########.fr       */
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

		int		get_foo(void) const;
		void	set_foo(int value);

	private:

		int		_foo;

};

#endif
