#include "ft.h"

void					map_set(t_map *map, int success)
{
	if (((*map).success = success))
	{
		(*map).row = -1;
		while (++(*map).row + (*map).max_side < (*map).rows &&
				(*map).max_side < (*map).cols)
		{
			(*map).col = -1;
			while ((*map).row + (*map).max_side < (*map).rows &&
					++(*map).col + (*map).max_side < (*map).cols)
			{
				(*map).side = 0;
				while ((*map).row + (*map).side < (*map).rows &&
						(*map).col + (*map).side < (*map).cols &&
						map_find_square(map))
					if (++(*map).side > (*map).max_side)
					{
						(*map).top = (*map).row;
						(*map).left = (*map).col;
						(*map).max_side = (*map).side;
					}
			}
		}
		map_print(map);
	}
	free((*map).data);
}