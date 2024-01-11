/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:34:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/11 15:09:27 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) {
	this->name = name;
	//std::cout << "HumanB " << this->name << " constructed" << std::endl;
}

HumanB::~HumanB( void ) {
	//std::cout << "HumanB " << this->name << " destructed" << std::endl;
}

void	HumanB::attack( void ) {
	if (!this->weapon)
		std::cout << this->name << " is unarmed" << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->weapon = &weapon;
}