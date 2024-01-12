/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:15:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/12 15:18:42 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

int	main(void) {
	Harl complainer;

	std::cout << "Harl DEBUG complain:" << std::endl;
	complainer.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Harl INFO complain:" << std::endl;
	complainer.complain("INFO");
	std::cout << std::endl;

	std::cout << "Harl WARNING complain:" << std::endl;
	complainer.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Harl ERROR complain:" << std::endl;
	complainer.complain("ERROR");
	std::cout << std::endl;

	std::cout << "Harl SOMETHINGWRONG complain:" << std::endl;
	complainer.complain("SOMETHINGWRONG");
	std::cout << std::endl;
}