/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:44:05 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 17:05:38 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <fstream>

std::string	replaceLine(std::string line, const std::string s1, const std::string s2);

bool		hasErrors( int	argc, std::string s1);

#endif
