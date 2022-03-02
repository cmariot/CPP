/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:26 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:29:03 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_HPP
#define SAMPLE2_HPP

/* Declaration of the Sample class */

class Sample2
{
	public:
		
		char	a1;
		int		a2;
		float	a3;

		Sample2(char p1, int p2, float p3);		//Constructor
		~Sample2(void);							//Destructor
};

#endif
