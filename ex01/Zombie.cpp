/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 15:44:30 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("Nameless") {
	//std::cout << this->_name << " has been \e[92mconstructed\e[0m" <<std::endl;
}

Zombie::Zombie( std::string name ) : _name(name) {
	//std::cout << this->_name << " has been \e[92mconstructed\e[0m" <<std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " has been \e[0;31mdestroyed\e[0m." <<std::endl;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}