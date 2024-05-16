/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/16 17:11:10 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	this->setName(name);
	//std::cout << "Zombie " << this->name << " has been constructed" <<std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->name << " has been destroyed" <<std::endl;
}

void Zombie::setName( std::string name ) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << "\033[0;30m\033[107m" << this->name << ": BraiiiiiiinnnzzzZ..." << "\033[39m\033[49m" << std::endl;
}