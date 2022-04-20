/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:41:14 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/19 10:27:46 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int	main(void)
{
	Data *dataPTR = new Data(42);
	std::cout << "Data value : " << dataPTR->getData() << " (initial)" << std::endl;

	uintptr_t newPTR = serialize(dataPTR);
	std::cout << "uiptr_t value : " << newPTR << " (serialiszed)" << std::endl;

	Data *newDataPTR = deserialize(newPTR);

	std::cout << "Data value : " << newDataPTR->getData() << " (deserialized)" << std::endl;

	if (dataPTR != 0)
		delete dataPTR;

	return (0);
}
