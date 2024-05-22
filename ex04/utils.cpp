/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:44:14 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/22 12:24:42 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	replaceLine(std::string line, const std::string& oldString, const std::string& newString) {
	int	pos = 0;

	while (line.find(oldString, pos) != std::string::npos)
	{
		pos = line.find(oldString, pos);
		line.erase(pos, oldString.length());
		line.insert(pos, newString);
		pos += newString.length();
	}
	return line;
}