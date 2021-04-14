#include "ft.h"

void					map_get(t_map *map, int rbytes)
{
	while ((ZERO(rbytes) || (*map).row < (*map).rows) &&
			((*map).rbytes = read((*map).fd, (*map).buf,
			(*map).rbytes = BUF_SIZE)) > rbytes && map_check_data(map))
		if (rbytes && (*map).row >= 1)
		{
			if ((*map).row == 1)
				(*map).data_ptr = map_malloc(map);
			(*map).data_ptr = ft_stpncpy((*map).data_ptr, (*map).buf,
											(*map).rbytes);
		}
}