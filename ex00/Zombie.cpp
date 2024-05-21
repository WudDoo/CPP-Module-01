/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:42:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 13:20:04 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : name("Nameless") {
	//std::cout << this->name << " has been \e[92mconstructed\e[0m" <<std::endl;
}

Zombie::Zombie( std::string _name ) : name(name) {
	//std::cout << this->name << " has been \e[92mconstructed\e[0m" <<std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " has been \033[0;31mdestroyed\033[0m." <<std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}