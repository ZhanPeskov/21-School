#include "ft.h"

int						main(int argc, char **argv)
{
	int					argument;
	t_map				map;

	argument = 1;
	if (argc == 1)
		map_check(&map, STDIN_FILENO);
	else
		while (argument < argc)
		{
			map_check(&map, open(argv[argument], O_RDONLY));
			if (++argument < argc)
				write(STDOUT_FILENO, "\n", 1);
		}
}