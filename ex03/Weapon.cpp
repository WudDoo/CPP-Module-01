/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:11:33 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/11 15:00:27 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->setType(type);
}

Weapon::~Weapon( void ) {
}

std::string& Weapon::getType( void ) {
	std::string &typeREF = this->type;

	return(typeREF);
}

void	Weapon::setType( std::string type ) {
	this->type = type;
}