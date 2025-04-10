/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:45:19 by adrgutie          #+#    #+#             */
/*   Updated: 2025/04/09 18:48:25 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

void Replacer::open_files()
{
	this->inputfile.open(this->filename);
	if (this->inputfile.is_open() == false)
	{
		std::cout << "Error cant open infile\n";
		std::exit(1);
	}
	this->outputfile.open(this->filename + ".replace");
	if (this->outputfile.is_open() == false)
	{
		std::cout << "Error cant open outfile\n";
		std::exit(1);
	}
	return ;
}

Replacer::Replacer(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2) {};

void Replacer::replace()
{
	this->open_files();
	std::string line;
	while(std::getline(this->inputfile, line))
	{
		std::string modified;
		size_t		pos = 0;
		while (pos < line.length())
		{
			size_t	found = line.find(this->s1, pos);
			if (found == std::string::npos)
			{
				modified += line.substr(pos);
				break ;
			}
			else
			{
				modified += line.substr(pos, found - pos);
				modified += this->s2;
				pos = found + this->s1.length();
			}
		}
		this->outputfile << modified << std::endl;
	}
	this->inputfile.close();
	this->outputfile.close();
}
