#include "ft.h"

char					*map_malloc(t_map *map)
{
	return ((*map).data = malloc((*map).size = sizeof(*(*map).data) *
							(*map).rows * ((*map).width = (*map).cols + 1)));
}