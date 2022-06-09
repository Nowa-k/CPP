/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:48:42 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/09 14:20:15 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	<iostream>
#include	<fstream>
#include	<string>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"

std::string	strReplace(const std::string str, const std::string s1, std::string s2)
{
	int	i;
	std::string	newStr;
	
	i = -1;
	while (str[++i])
	{
		
	}
	return (newStr);
}

int main(int argc, char **argv)
{	
	std::ifstream inputFile(argv[1]);
	std::fstream file_out;
	std::string rfilename;
	std::string	line;
	std::string	replaceLine;
	

	if (argc != 4)
		std::cout << RED << "[filename] [s1] [s2]" << std::endl;
	else
	{
		rfilename = argv[1];
		rfilename += ".replace";
		if (!inputFile.is_open())
			std::cout << RED << "Could not open the file." << std::endl;
		else
		{
			file_out.open(rfilename, std::ios_base::out);
			if (!file_out.is_open())
				std::cout << RED << "Could not open the file replace. " << rfilename << std::cout;
			else
			{
				while (std::getline(inputFile, line))
					replaceLine = replaceLine + line + "\n";
				replaceLine = strReplace(replaceLine, argv[2], argv[3]);
				file_out << replaceLine;
				std::cout << GRN << "Done Writing!" << std::endl;
			}
			
		}
	}
	return (1);
}