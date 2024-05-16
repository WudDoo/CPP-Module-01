/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:20:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/16 17:14:48 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::string name;

	std::cout << "Creating a zombie in the stack." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie zombie1(name);
	zombie1.announce();

	std::cout << "Creating a zombie in the heap using newZombie." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie *zombie2 = newZombie(name);
	zombie2->announce();
	delete(zombie2);

	std::cout << "Creating a zombie in the stack using randomChump." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	randomChump(name);
}

// Should properly interpret Ctrl+D

// To allow names with multiple words I need to create utils.cpp and utils.hpp and add the following code block to them.
// Must also replace `std::cin >> name;` with `name=getInput(<prompt>);`
/* std::string getInput(const std::string prompt) {
	std::string input = "";

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::exit(0);
		}
		if (std::cin.good() && !input.empty() && !isAllWhitespaces(input))
			break ;
		else
		{
			std::cin.clear();
			std::cout << "\033[91mInvalid input, try again.\033[39m" << std::endl;
		}
	}
	return (input);
}

bool	isAllWhitespaces(const std::string str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
} */