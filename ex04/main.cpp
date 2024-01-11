/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/11 17:44:57 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong numbers of arguments!" << std::endl;
		std::cout << "Correct usage:" << std::endl;
		std::cout << "\t./notsed <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	std::ifstream oldFile(argv[1]);
	std::string filename = argv[1];
	filename += ".replace";
	std::ofstream newFile(filename.c_str());

	std::string oldString = argv[2];
	std::string newString = argv[3];
	std::string newLine;
	std::string line;
	int	subPos = 0;
	int	pos = 0;

	while (getline(oldFile, line))
	{
		subPos = line.find(oldString);
		pos = 0;
		if (subPos < 0)
			newFile << line << std::endl;
		else
		{
			newLine.clear();
			while (subPos >= 0) //this while is working incorrectly
			{
				newLine += line.substr(pos, subPos) + newString;
				subPos = line.find(oldString, newLine.length());
				if (subPos >= 0)
					pos = subPos + oldString.length();
			}
			newLine += line.substr(pos, -1);
			newFile << newLine << std::endl;
		}
		subPos = 0;
	}
	newFile.close();
	oldFile.close();
	return (0);
}