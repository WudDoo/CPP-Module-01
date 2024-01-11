/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:16:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/11 15:06:20 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : weapon(weapon){
	this->name = name;
	//std::cout << "HumanA " << this->name << " constructed" << std::endl;
}

HumanA::~HumanA( void ) {
	//std::cout << "HumanA " << this->name << " destructed" << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}