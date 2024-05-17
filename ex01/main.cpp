/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:52:09 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 18:00:44 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *horde;
	int	N = 6;

	horde = zombieHorde(N, "John Doe");
	
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	
	delete [] horde;
}