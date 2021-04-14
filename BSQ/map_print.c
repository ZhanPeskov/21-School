#include "ft.h"

void					map_print(t_map *map)
{
	int					y;
	int					x;
	long				item;

	y = -1;
	item = ((*map).top - 1) * (*map).width + (*map).left;
	while (++y < (*map).max_side)
	{
		item += (*map).width;
		x = -1;
		while (++x < (*map).max_side)
			(*map).data[item + x] = (*map).chars[C_FULL];
	}
	write(STDOUT_FILENO, (*map).data, (*map).size);
}