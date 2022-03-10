/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:30:56 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/10 10:13:12 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen karen;

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");

	karen.complain("");
	karen.complain("does not exist");
	
	return (0);
}
