/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:15:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 11:49:23 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void) {
	Harl harl;

	std::cout << "> DEBUG complain:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "> INFO complain:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "> WARNING complain:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "> ERROR complain:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "> SOMETHINGWRONG complain:" << std::endl;
	harl.complain("SOMETHINGWRONG");
	std::cout << std::endl;
}