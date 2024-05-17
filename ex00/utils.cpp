/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:31:04 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 17:42:16 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string getInput(const std::string prompt) {
	std::string input = "";

	while (true)
	{
		std::cout << prompt << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::exit(0);
		}
		if (std::cin.good() && !input.empty() && !isAllWhitespaces(input))
			break;
		else
		{
			std::cin.clear();
			std::cout << "\033[91mInvalid input, try again.\033[39m" << std::endl << std::flush;
		}
	}
	return (input);
}

bool	isAllWhitespaces(const std::string str)
{
	for (size_t i = 0; str[i]; i++)
		if (!std::isspace(str[i]))
			return (false);
	return (true);
}