/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:15:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/23 12:30:26 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void) {
	Harl complainer;

	std::cout << "> DEBUG complain:" << std::endl;
	complainer.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "> INFO complain:" << std::endl;
	complainer.complain("INFO");
	std::cout << std::endl;

	std::cout << "> WARNING complain:" << std::endl;
	complainer.complain("WARNING");
	std::cout << std::endl;

	std::cout << "> ERROR complain:" << std::endl;
	complainer.complain("ERROR");
	std::cout << std::endl;

	std::cout << "> SOMETHINGWRONG complain:" << std::endl;
	complainer.complain("SOMETHINGWRONG");
}