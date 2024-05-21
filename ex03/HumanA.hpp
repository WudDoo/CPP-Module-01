/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:56:05 by mortins-          #+#    #+#             */
/*   Updated: 2024/05/21 13:07:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon& weapon;

	public:
		// Constructor
		HumanA( std::string _name, Weapon& _weapon );

		// Destructor
		~HumanA( void );

		// Public member function
		void	attack( void );
};

#endif