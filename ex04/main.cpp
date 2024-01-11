/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/11 16:43:24 by mortins-         ###   ########.fr       */
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

	std::string filename = argv[1];
	std::fstream oldFile(filename);
	std::fstream newFile(filename.append(".replace"));
	std::string line = "";

	while (getline(oldFile, line))
	{
		if (line.compare(argv[2]) == 0)
			newFile << argv[3];
		else
			newFile << line;
	}
	newFile.close();
	oldFile.close();
	return (0);
}