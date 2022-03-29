/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:41:14 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:15:51 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int	main(void)
{
	Data *dataPTR = new Data(42);
	std::cout << "Data value : " << dataPTR->getData() << std::endl;

	uintptr_t newPTR = serialize(dataPTR);
	Data *newDataPTR = deserialize(newPTR);

	std::cout << "Data value : " << newDataPTR->getData() << std::endl;

	if (dataPTR != 0)
		delete dataPTR;

	return (0);
}
