/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:20:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/08 17:01:36 by mortins-         ###   ########.fr       */
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