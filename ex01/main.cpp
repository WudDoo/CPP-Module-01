/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:52:09 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/09 16:23:17 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::string	name;
	int	N;
	
	std::cout << "Creating a zombie horde." << std::endl;
	std::cout << "Number of zombies in the horde: ";
	std::cin >> N;

	std::cout << "Zombies name: ";
	std::cin >> name;

	Zombie *horde;

	horde = zombieHorde(N, name);
	
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	
	delete [] horde;
}
