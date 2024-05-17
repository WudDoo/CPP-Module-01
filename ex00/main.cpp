/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:20:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 17:58:47 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::string name;

	std::cout << "Creating a zombie in the stack." << std::endl << std::flush;
	Zombie zombie1("Zombie");
	zombie1.announce();

	std::cout << "Creating a zombie in the stack using randomChump." << std::endl << std::flush;
	randomChump("Chump");

	
	std::cout << "Creating a zombie in the heap using newZombie." << std::endl << std::flush;
	Zombie *zombie2 = newZombie("Heap");
	zombie2->announce();
	delete(zombie2);
}