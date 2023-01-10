/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:54:58 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/04 11:42:36 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	int		value;
	char	cara;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main( void )
{
	uintptr_t ptr;
	Data D;
	Data *vaTeF;

	D.value = 5;
	D.cara = 'P';
	std::cout << "D.value : " << D.value << " || D.cara : "<< D.cara << std::endl;
	std::cout << "Adress : " << &D << std::endl;
	std::cout << "------" << std::endl;
	ptr = serialize(&D);
	std::cout << "Serialize : " << ptr << std::endl;
	vaTeF = deserialize(ptr);
	std::cout << "------" << std::endl;
	std::cout << "D.value : " << D.value << " D.cara : "<< D.cara << std::endl;
	std::cout << "D Adress : " << &D << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "vaTef.value : " << vaTeF->value << " || vaTef.cara : "<< vaTeF->cara << std::endl;
	std::cout << "vaTef Adress : " << vaTeF << std::endl;
}