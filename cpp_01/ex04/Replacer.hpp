/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:46:50 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 18:47:59 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP
#include <string>
#include <fstream>
#include <iostream>

class Replacer
{
	private:
		std::string		filename;
		std::string		s1;
		std::string		s2;
		std::ifstream	inputfile;
		std::ofstream	outputfile;
		void			open_files();
	public:
		Replacer(std::string filename, std::string s1, std::string s2);
		void			replace();
		
};

#endif