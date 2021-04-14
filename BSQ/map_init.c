#include "ft.h"

void					map_init(t_map *map)
{
	(*map).rows = 0;
	(*map).row = -1;
	(*map).cols = MAX_COLUMNS;
	(*map).col = -1;
	(*map).single_blocks = 0;
	(*map).chars[C_EMPTY] = '0';
	(*map).chars[C_OBSTACLE] = '0';
	(*map).chars[C_FULL] = '0';
	(*map).data = NULL;
	(*map).max_side = 0;
	(*map).success = FALSE;
}