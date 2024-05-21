/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:46:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 12:04:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	// std::cout << "Harl has been \e[92mconstructed\e[0m" << std::endl;
}

Harl::~Harl( void ) {
	// std::cout << "Harl has been \e[91mdestroyed\e[0m" << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "\e[90m\e[107m[ DEBUG ]\e[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "\e[90m\e[107m[ INFO ]\e[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout<< " You didn't put enough bacon in my burger!";
	std::cout << " If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "\e[90m\e[107m[ WARNING ]\e[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started working here ";
	std::cout << "since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "\e[90m\e[107m[ ERROR ]\e[0m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	int	i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++) {
		if (level.compare(levels[i]) == 0)
			break;
		}
	switch (i){
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break;
	}
}