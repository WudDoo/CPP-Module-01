/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:32:11 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/20 14:57:59 by mortins-         ###   ########.fr       */
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
		HumanB( std::string _name);
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon& _weapon );
};

#endif
