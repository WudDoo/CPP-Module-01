/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:32:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/11 14:54:54 by mortins-         ###   ########.fr       */
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
		HumanB( std::string name);
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon& weapon );
};

#endif
