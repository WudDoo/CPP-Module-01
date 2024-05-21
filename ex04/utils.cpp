/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:44:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 16:19:58 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	replaceLine(std::string line, const std::string& oldString, const std::string& newString) {
	int	pos = 0;

	while (line.find(oldString, pos) != std::string::npos)
	{
		pos = line.find(oldString, pos);
		line.erase(pos, oldString.length());
		line.insert(pos, newString);
		pos += newString.length();
	}
	return line;
}

bool	hasErrors( int	argc, std::string s1) {
	if (argc != 4)
	{
		std::cout << "\e[91mWrong numbers of arguments!\e[0m" << std::endl;
		std::cout << "Correct usage:" << std::endl;
		std::cout << "\t./notsed <filename> <string1> <string2>" << std::endl;
	}

	else if (s1.empty())
		std::cout << "\e[91mError: String1 must not be empty\e[0m" << std::endl;

	else
		return (false);

	return (true);
}