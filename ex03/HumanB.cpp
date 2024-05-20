/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:34:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 14:58:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string _name) : name(_name){
	//std::cout << "HumanB " << this->name << " constructed" << std::endl;
}

HumanB::~HumanB( void ) {
	//std::cout << "HumanB " << this->name << " destructed" << std::endl;
}

void	HumanB::attack( void ) {
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& _weapon ) {
	this->weapon = &_weapon;
}