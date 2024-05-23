/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:20:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/23 12:10:57 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::cout << "\e[30m\e[47m>>\e[0m Creating a nameless zombie in the stack." << std::endl << std::flush;
	Zombie zombie;
	zombie.announce();
	std::cout << std::endl << std::flush;

	std::cout << "\e[30m\e[47m>>\e[0m Creating a zombie in the stack." << std::endl << std::flush;
	Zombie zombie1("Zombie");
	zombie1.announce();
	std::cout << std::endl << std::flush;

	std::cout << "\e[30m\e[47m>>\e[0m Creating a zombie in the stack using randomChump." << std::endl << std::flush;
	randomChump("Chump");
	std::cout << std::endl << std::flush;

	std::cout << "\e[30m\e[47m>>\e[0m Creating a zombie in the heap using newZombie." << std::endl << std::flush;
	Zombie *zombie2 = newZombie("Heap");
	zombie2->announce();
	std::cout << std::endl << std::flush;

	delete(zombie2);
}