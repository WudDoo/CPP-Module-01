/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:34:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 15:55:09 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string _name) : name(_name), weapon(NULL){
	//std::cout << "HumanB " << this->name << " \e[92mconstructed\e[0m" << std::endl;
}

HumanB::~HumanB( void ) {
	//std::cout << "HumanB " << this->name << " \e[91mdestroyed\e[0m" << std::endl;
}

void	HumanB::setWeapon( Weapon& _weapon ) {
	this->weapon = &_weapon;
}

void	HumanB::attack( void ) {
	if (!weapon)
		std::cout << this->name << " is unarmed." << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}