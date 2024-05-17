/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:20:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 17:49:44 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "utils.hpp"

int	main(void) {
	std::string name;

	std::cout << "Creating a zombie in the stack." << std::endl << std::flush;
	Zombie zombie1(getInput("* Zombie name: "));
	zombie1.announce();

	std::cout << "Creating a zombie in the stack using randomChump." << std::endl << std::flush;
	randomChump(getInput("* Zombie name: "));

	
	std::cout << "Creating a zombie in the heap using newZombie." << std::endl << std::flush;
	Zombie *zombie2 = newZombie(getInput("* Zombie name: "));
	zombie2->announce();
	delete(zombie2);
}