/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 14:34:22 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : name("Nameless") {
	//std::cout << this->name << " has been constructed" <<std::endl;
}

Zombie::Zombie( std::string name ) : name(name) {
	//std::cout << this->name << " has been constructed" <<std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " has been \e[0;31mdestroyed\e[0m." <<std::endl;
}

void Zombie::setName( std::string name ) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}