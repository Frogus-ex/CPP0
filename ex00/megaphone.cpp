#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string tmp;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	for(int i = 1 ; i < ac ; i++)
	{
		tmp = av[i];
		for(unsigned long y = 0 ; y < tmp.size() ; y++)
			std::cout << (char)toupper(tmp[y]);
	}
	std::cout << "\n";
	return 0;
}