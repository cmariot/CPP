/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:10:17 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/29 09:13:55 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data *deserialize(uintptr_t ptr)
{
	Data *ret = 0;

	if (ptr)
	{
		ret = reinterpret_cast<Data *>(ptr);
	}
	return ret;
}
