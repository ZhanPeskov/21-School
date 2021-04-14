#include "ft.h"

int						map_control(t_map *map, char c)
{
	char				empty;

	if (ft_is_printable(c) && ft_is_digit(empty = (*map).chars[C_EMPTY]) &&
			((*map).rows = (*map).rows * 10 + empty - '0') <= MAX_LINES)
	{
		(*map).chars[C_EMPTY] = (*map).chars[C_OBSTACLE];
		(*map).chars[C_OBSTACLE] = (*map).chars[C_FULL];
		(*map).chars[C_FULL] = c;
		return (TRUE);
	}
	return (FALSE);
}