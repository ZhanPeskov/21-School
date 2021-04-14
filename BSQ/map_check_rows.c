#include "ft.h"

int						map_check_rows(t_map *map)
{
	if (ZERO(++(*map).row))
	{
		if (ZERO((*map).rows) ||
				(*map).chars[C_EMPTY] == (*map).chars[C_OBSTACLE] ||
				(*map).chars[C_OBSTACLE] == (*map).chars[C_FULL] ||
				(*map).chars[C_FULL] == (*map).chars[C_EMPTY])
			return (FALSE);
		(*map).lseek = (*map).col + 1;
	}
	else if ((*map).row == 1)
	{
		if (ZERO((*map).col))
			return (FALSE);
		(*map).cols = (*map).col;
	}
	else if ((*map).col != (*map).cols)
		return (FALSE);
	(*map).col = -1;
	return (TRUE);
}