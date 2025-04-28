/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:25:25 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/28 19:06:56 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap();
		ClapTrap(std::string name);
		bool		can_act(void) const;
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

};

#endif