/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 18:05:18 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : name("Nameless") {
	//std::cout << "Zombie " << this->name << " has been constructed" <<std::endl;
}

Zombie::Zombie( std::string name ) : name(name) {
	//std::cout << "Zombie " << this->name << " has been constructed" <<std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->name << " has been destroyed" <<std::endl;
}

void	Zombie::announce( void ) {
	std::cout << "\033[0;30m\033[107m" << this->name << "\033[39m\033[49m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}