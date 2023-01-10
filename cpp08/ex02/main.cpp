/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:17:34 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/14 10:51:18 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
int main()
{
	std::cout << CYN << "----------------int----------------" << WHT << std::endl; 
	{
		std::list<int> comp;
		MutantStack<int> mstack;
		mstack.push(5);
		comp.push_back(5);
		mstack.push(17);
		comp.push_back(17);
		mstack.pop();
		comp.pop_back();
		mstack.push(3);
		comp.push_back(3);
		mstack.push(5);
		comp.push_back(5);
		mstack.push(737);
		comp.push_back(737);
		mstack.push(0);
		comp.push_back(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::list<int>::iterator beg = comp.begin();
		std::list<int>::iterator endi = comp.end();
		++it;
		++beg;
		std::cout << "Value  : "<< *it << " and "<< *beg << std::endl;
		--it;
		--beg;
		std::cout << "Value  : "<< *it << " and " << *beg << std::endl;
		std::cout << MAG << "-aff mstack-" << WHT << std::endl;		
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::cout << MAG << "-aff comp-" << WHT << std::endl;		
		while (beg != endi)
		{
			std::cout << *beg << " ";
			++beg;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
	}
	std::cout << CYN << "----------------int----------------" << WHT << std::endl;
	{
		MutantStack<std::string> mstack;
		mstack.push("je ");
		mstack.push("suis ");
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push("une ");
		mstack.push("phrase ");
		mstack.push("plutot ");
		mstack.push("random ");

		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		std::cout << "Value  : "<< *it << std::endl;
		--it;
		std::cout << "Value  : "<< *it << std::endl;
		MutantStack<std::string> s;
		s = mstack;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		it = s.begin();
		ite = s.end();
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	return 0;
}