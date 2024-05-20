/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 17:06:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "utils.hpp"

int	main(int argc, char **argv)
{
	if (hasErrors(argc, argv[2]))
		return (1);

	std::ifstream oldFile(argv[1]);
	if (!oldFile.good())
	{
		std::cout << "Error: Can't access file" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	filename.append(".replace");
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