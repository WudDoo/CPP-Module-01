/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:06:39 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 13:05:24 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string type;

	public:
		// Constructor
		Weapon( std::string _type );

		// Destructor
		~Weapon( void );

		// Setter
		void	setType( std::string _type);

		// Getter
		std::string const &	getType( void );
};

#endif