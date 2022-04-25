/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:06:39 by cmariot           #+#    #+#             */
/*   Updated: 2022/04/25 12:38:25 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void test_on_mutantStack(void)
{
	MutantStack<int> mstack;

	std::cout << mstack.empty() << std::endl;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);

	std::cout << (s == mstack) << std::endl;

}

void test_on_list(void)
{
	std::list<int> mlist;
	
	std::cout << mlist.empty() << std::endl;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << mlist.back() << std::endl;
	
	mlist.pop_back();
	
	std::cout << mlist.size() << std::endl;
	
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);

	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::list<int> s(mlist);

	std::cout << (s == mlist) << std::endl;

}

int main(void)
{
	test_on_mutantStack();
	std::cout << "\n VS \n" << std::endl;
	test_on_list();
	return 0;
}
