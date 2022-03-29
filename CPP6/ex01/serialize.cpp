/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:58:21 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 10:19:16 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t ret = 0;

	if (ptr)
	{
		ret = reinterpret_cast<uintptr_t>(ptr);
	}
	return ret;
}
