/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:32:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 13:06:46 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon*	weapon;

	public:
		// Constructor
		HumanB( std::string _name);

		// Destructor
		~HumanB( void );

		// Setter
		void	setWeapon( Weapon& _weapon );

		// Public member function
		void	attack( void );
};

#endif
