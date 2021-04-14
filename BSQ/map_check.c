#include "ft.h"

int						map_check(t_map *map, int fd)
{
	if (((*map).fd = fd) >= STDIN_FILENO)
	{
		map_init(map);
		map_get(map, (*map).fd ? 0 : 1);
		if ((*map).fd)
		{
			if (((*map).success = map_correct(map, 0) &&
					(*map).lseek == lseek((*map).fd, (*map).lseek, SEEK_SET) &&
					map_malloc(map)))
				map_set(map, read((*map).fd, (*map).data, (*map).size) ==
								(*map).size & close((*map).fd) >= 0);
		}
		else if ((*map).data)
			map_set(map, map_correct(map, 2));
		if ((*map).success)
			return (TRUE);
	}
	write(STDERR_FILENO, MSG_MAP_ERROR, sizeof(MSG_MAP_ERROR) - 1);
	return (FALSE);
}