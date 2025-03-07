#include <cctype>
#include <iostream>

std::string join_all(char **argv, int argc)
{
	std::string str;
	int	i = 1;

	while (++i <= argc)
		str += (std::string)argv[i - 1];
	return(str);
}


int	main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	str = join_all(argv, argc);
	for (int c = 0; str[c];c++)
		std::cout << (char)std::toupper(str[c]);
	std::cout << std::endl;
}
