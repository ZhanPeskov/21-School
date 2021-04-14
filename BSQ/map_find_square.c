#include "ft.h"

int						map_find_square(t_map *map)
{
	int					side;
	long				item;

	side = -2;
	item = ((*map).row - 1) * (*map).width + (*map).col + (*map).side;
	while (++side < (*map).side)
		if ((*map).data[item += (*map).width] == (*map).chars[C_OBSTACLE])
		{
			(*map).col += (*map).side;
			return (FALSE);
		}
	while (--side >= 0)
		if ((*map).data[--item] == (*map).chars[C_OBSTACLE])
		{
			(*map).col += side;
			return (FALSE);
		}
	return (TRUE);
}