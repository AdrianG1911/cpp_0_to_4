#include <iostream>
#include <string>
#include <cctype>
#include <sstream>


std::string	megaphone(char *str) 
{
	std::string output = str;
	for (std::string::iterator it = output.begin(); it != output.end(); it++)
		*it = std::toupper(*it);
	return (output);
}

int	main(int argc, char *argv[]) 
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		std::cout << megaphone(argv[i]);
	std::cout << std::endl;
	return (0);
}