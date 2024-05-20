/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:11:33 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 15:07:14 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string _type ) : type(_type){
	//std::cout << "Weapon " << this->type << " constructed" << std::endl;
}

Weapon::~Weapon( void ) {
	//std::cout << "Weapon " << this->type << " destructed" << std::endl;
}

std::string const & Weapon::getType( void ) {
	std::string &typeREF = this->type;

	return(typeREF);
}

void	Weapon::setType( std::string _type ) {
	this->type = _type;
}