/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:44:05 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 16:21:09 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>

std::string	replaceLine(std::string line, const std::string& oldString, const std::string& newString);

bool		hasErrors( int	argc, std::string s1);

#endif
