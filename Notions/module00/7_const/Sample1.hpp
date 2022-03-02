/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:26 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:50:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_HPP
#define SAMPLE1_HPP

/* Declaration of the Sample class */

class Sample1
{
	public:
		
		float const	pi;
		int			qd;

		Sample1(float const f);		//Constructor
		~Sample1(void);				//Destructor

		void	bar(void) const;
};

#endif
