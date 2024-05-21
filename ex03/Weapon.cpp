/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:11:33 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 13:19:58 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string _type ) : type(_type){
	//std::cout << "Weapon " << this->type << " \e[92mconstructed\e[0m" << std::endl;
}

Weapon::~Weapon( void ) {
	//std::cout << "Weapon " << this->type << " \e[91mdestroyed\e[0m" << std::endl;
}

void	Weapon::setType( std::string _type ) {
	this->type = _type;
}

std::string const & Weapon::getType( void ) {
	std::string &typeREF = this->type;

	return(typeREF);
}