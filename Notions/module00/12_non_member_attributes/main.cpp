/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:30:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 17:29:25 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.hpp"
#include <iostream>

int	main(void)
{
	Sample1 instance1;
	Sample1 instance2;
	Sample1 instance3;

	std::cout << "_nbInst = " << instance1.get_nbInstance() << std::endl;

	Sample1 instance4;
	Sample1 instance5;
	
	std::cout << "_nbInst = " << instance1.get_nbInstance() << std::endl;
	
	return(0);
}
