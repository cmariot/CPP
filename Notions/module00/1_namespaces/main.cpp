/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:52:35 by cmariot           #+#    #+#             */
/*   Updated: 2022/03/02 15:15:40 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;

int	f(void)
{
	return (gl_var);
}

namespace Foo {

	int	gl_var = 2;

	int	f(void)
	{
		return (Foo::gl_var);
	}
}

namespace Bar = Foo;

int	main(void)
{
	printf("gl_var:			[%d]\n", gl_var);
	printf("f():			[%d]\n", f());
	printf("Foo::gl_var:		[%d]\n", Foo::gl_var);
	printf("Foo::f():		[%d]\n", Foo::f());
	printf("Bar::gl_var:		[%d]\n", Bar::gl_var);
	printf("Bar::f():		[%d]\n", Bar::f());
	return (0);
}
