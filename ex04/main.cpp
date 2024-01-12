/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/12 14:25:54 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replaceLine(std::string line, const std::string s1, const std::string s2) {
	std::string	newLine;
	int	pos = line.find(s1);

	while (pos >= 0)
	{
		newLine = line.substr(0, pos) + s2 + line.substr(pos + s1.length(), -1);
		pos = newLine.find(s1);
		line = newLine;
		newLine.clear();
	}
	return line;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong numbers of arguments!" << std::endl;
		std::cout << "Correct usage:" << std::endl;
		std::cout << "\t./notsed <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	std::string oldString = argv[2];
	if (oldString.empty())
	{
		std::cout << "Error: String1 must not be empty" << std::endl;
		return (1);
	}

	std::ifstream oldFile(argv[1]);
	if (!oldFile.good())
	{
		std::cout << "Error: Can't access file" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	filename += ".replace";
	std::ofstream newFile(filename.c_str());

	std::string line;
	int	subPos;

	while (getline(oldFile, line))
	{
		subPos = line.find(argv[2]);
		if (subPos < 0)
			newFile << line << std::endl;
		else
			newFile << replaceLine(line, argv[2], argv[3]) << std::endl;
		subPos = 0;
	}
	newFile.close();
	oldFile.close();
	return (0);
}