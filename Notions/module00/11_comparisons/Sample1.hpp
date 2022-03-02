/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:26 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 17:00:14 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_HPP
#define SAMPLE1_HPP

/* Declaration of the Sample class */

class Sample1
{
	public:
		
		Sample1(int	value);		//Constructor
		~Sample1(void);			//Destructor

		int		get_foo(void) const;
		int		compare(Sample1 *other) const;

	private:

		int		_foo;

};

#endif
