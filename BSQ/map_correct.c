#include "ft.h"

int						map_correct(t_map *map, int rbytes)
{
	return ((*map).rbytes >= rbytes && (*map).col == -1 &&
			(*map).row == (*map).rows && (*map).single_blocks);
}