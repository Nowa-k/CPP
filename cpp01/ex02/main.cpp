/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:32:25 by aleferra          #+#    #+#             */
/*   Updated: 2022/09/13 15:15:50 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str ("HI THIS IS BRAIN");
	std::string *stringPTR;
	std::string &stringREF = str;
	
	stringPTR = &str;
	std::cout << "Adress string : "<< &str << std::endl;
	std::cout << "Adress stringPTR : "<< stringPTR << std::endl;
	std::cout << "Adress stringRef : "<< &stringREF << std::endl;
	//stringREF = "doute";

	std::cout << std::endl;

	std::cout << "String value : " << str << std::endl;
	std::cout << "Value pointed to by stringPtr : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringRef : " << stringREF << std::endl;
}