/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:55:15 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 18:46:07 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		const std::string&	getType() const;
		void	setType(const std::string& type);
		Weapon(std::string type = "nothing");
};

#endif