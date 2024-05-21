/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:05:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 12:09:45 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "\e[91mWrong number of arguments!\e[0m" << std::endl;
		std::cout << "Correct usage: ./harlFilter <level>" << std::endl;
		return (1);
	}
	Harl complainer;
	complainer.complain(argv[1]);
	return (0);
}