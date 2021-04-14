#include "ft.h"

int						map_check_data(t_map *map)
{
	char				c;

	(*map).rbyte = -1;
	while (++(*map).rbyte < (*map).rbytes)
	{
		if (++(*map).col > MAX_COLUMNS)
			return (FALSE);
		if ((c = (*map).buf[(*map).rbyte]) == '\n')
		{
			if (NOT(map_check_rows(map)))
				return (FALSE);
		}
		else if ((*map).row == -1)
		{
			if (NOT(map_control(map, c)))
				return (FALSE);
		}
		else if ((*map).col >= ((*map).row == (*map).rows ? 0 : (*map).cols) ||
			(c != (*map).chars[C_OBSTACLE] && (c != (*map).chars[C_EMPTY] ||
			(*map).single_blocks == LONG_MAX || ZERO(++(*map).single_blocks))))
				return (FALSE);
	}
	return (TRUE);
}