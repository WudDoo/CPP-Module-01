/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:34:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 13:19:50 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string _name) : name(_name){
	//std::cout << "HumanB " << this->name << " \e[92mconstructed\e[0m" << std::endl;
}

HumanB::~HumanB( void ) {
	//std::cout << "HumanB " << this->name << " \e[91mdestroyed\e[0m" << std::endl;
}

void	HumanB::setWeapon( Weapon& _weapon ) {
	this->weapon = &_weapon;
}

void	HumanB::attack( void ) {
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}