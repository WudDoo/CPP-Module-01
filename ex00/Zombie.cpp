/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/17 18:19:15 by mortins-         ###   ########.fr       */
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
	std::cout << "Zombie " << this->name << " has been \033[0;31mdestroyed\033[0m." <<std::endl;
}

void	Zombie::announce( void ) {
	std::cout << "\033[0;90m\033[47m" << this->name << "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}