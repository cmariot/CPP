/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:26 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:11:07 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
#define SAMPLE_HPP

/* Declaration of the Sample class */

class Sample
{
	public:
		
		Sample(void);		//Constructor
		~Sample(void);		//Destructor

		int		foo;
		void	bar(void);

};

#endif
