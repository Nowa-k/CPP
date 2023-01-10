/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:16:48 by aleferra          #+#    #+#             */
/*   Updated: 2022/11/04 11:18:00 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>


bool ft_isInt(std::string str, const char *av)
{
	int index = 0;
	int max = 10;
	if ((str[0] != '-') && !std::isdigit(str[0]))
		return (false);
	if (str[0] == '-')
	{
		max = 11;
		index = 1;
	}
	while (str[index])
	{
		if (!std::isdigit(str[index]))
			return (false);
		index ++;
	}
	if (index > max)
		return (false);
	if (max == 10 && std::strcmp(av, "2147483647") > 0 && index == 10)
		return (false);
	if (max == 11 && std::strcmp(av, "-2147483648") > 0 && index == 11)
		return (false);
	return (true);
}

bool ft_isChar(std::string str, const char *s)
{
	if (str.size() == 1)
		return (true);
	if (str.size() <= 3)
	{
		for (size_t i = 0; i <= str.size() ; i++)
		{
			if (!std::isdigit(str[i]))
				return (false);
		}
		if (std::atoi(s) <= 255 && std::atoi(s) >= 0)
			return (true);
	}
	return (false);
}

bool ft_isFloat(std::string str)
{
	int index = 0;
	if (str == "nanf" || str == "+inff" || str == "-inff")
		return (true);
	if (str[index] == '-')
		index++;
	while (str[index] && std::isdigit(str[index]))
		index++;
	if (str[index] != '.')
		return (false);
	index++;
	if (!std::isdigit(str[index]))
		return (false);
	while (str[index] && std::isdigit(str[index]))
		index++;
	if (str[index] != 'f')
		return (false);
	if (!str[index + 1])
		return (true);
	return (false);
}

bool ft_isDouble(std::string str)
{
	int index = 0;

	if (str[index] == '-')
		index ++;
	if (str == "nan" || str == "+inf" || str == "-inf")
		return (true);
	while (str[index] && std::isdigit(str[index]))
		index ++;
	if (str[index] != '.' || (str[index] == '.' && !str[index + 1]))
		return (false);
	index ++;
	while (str[index] && std::isdigit(str[index]))
		index ++;
	if (str[index])
		return (false);
	return (true);
}

int	ft_findType(char *str)
{	
	if (ft_isInt(str, str))
		return (1);
	else if (ft_isChar(str, str))
		return (2);
	else if (ft_isFloat(str))
		return (3);
	else if (ft_isDouble(str))
		return (4);
	return (0);
}

void	ft_printInt(int _i, std::string str, char *s)
{
	int index = 0;
	int neg = 0;

	if (str[index] == '-')
	{
		index ++;
		neg = 1;
	}
	if (str[index] == 'n' || str[index] == 'i')
	{
		std::cout << "Int : overflow." << std::endl;
		return ;	
	}
	while (str[index] && std::isdigit(str[index]))
		index ++;
	if (neg == 1 && index > 11)
		std::cout << "Int : Impossible." << std::endl;
	else if (neg == 0 && index > 10)
		std::cout << "Int : Impossible." << std::endl;
	else if (neg == 1 && index == 11 && std::strncmp(s, "-2147483648", 11) > 0)
		std::cout << "Int : Impossible." << std::endl;
	else if (neg == 0 && index == 10 && std::strncmp(s, "2147483647", 10) > 0)
		std::cout << "Int : Impossible." << std::endl;
	else
		std::cout << "Int : " << _i << std::endl;
}

void	ft_printChar(int _i, char _c)
{
	if(std::isprint(_i))
		std::cout << "Char : '" << _c << "'" << std::endl;
	else 
		std::cout << "Char : is not displayable." << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	int type = ft_findType(argv[1]);
	int _i;
	char _c;
	float _f;
	double _d; 
	switch (type)
	{
		case 4:
			_d = std::strtod(argv[1], NULL);
			_i = static_cast<int>(_d);
			_c = static_cast<char>(_d);
			_f = static_cast<float>(_d);
			break;
		case 3:
			_f = std::strtof(argv[1], NULL);
			_i = static_cast<int>(_f);
			_c = static_cast<char>(_f);
			_d = static_cast<double>(_f);
			break;
		case 2:
			_c = argv[0][0];
			_i = static_cast<int>(_c);
			_f = static_cast<float>(_c);
			_d = static_cast<double>(_c);
			break;
		case 1:
			_i = std::atoi(argv[1]);
			_c = static_cast<char>(_i);
			_f = static_cast<float>(_i);
			_d = static_cast<double>(_i);
			break;
		default:
			std::cout << "No type detected" << std::endl;
			return (0);
	}
	ft_printInt(_i, argv[1], argv[1]);
	ft_printChar(_i, _c);
	std::cout << "Float : " << std::fixed << std::setprecision(2) << _f << "f" << std::endl;
	std::cout << "Double : " << std::fixed << std::setprecision(2) << _d << std::endl;
	return 1;
}