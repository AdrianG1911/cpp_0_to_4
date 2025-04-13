#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& rhs);
		~FragTrap();
		FragTrap(std::string name);
		bool	can_act(void) const;
		void	highFivesGuys(void);
		void	attack(const std::string& target);
};

#endif