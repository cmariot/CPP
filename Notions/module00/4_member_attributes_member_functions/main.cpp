/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:30:00 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:15:35 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"
#include <iostream>

int	main(void)
{
	Sample my_first_instance;

	my_first_instance.foo = 42;
	std::cout << my_first_instance.foo << std::endl;
	my_first_instance.bar();
	return(0);
}
