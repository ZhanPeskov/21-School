#include <stdio.h>
#include "ft.h"

void					map_show(t_map *map)
{
	printf("ROWS = %ld\n", (*map).rows);
	printf("C_EMPTY = '%c'\n", (*map).chars[C_EMPTY]);
	printf("C_OBSTACLE = '%c'\n", (*map).chars[C_OBSTACLE]);
	printf("C_FULL = '%c'\n", (*map).chars[C_FULL]);
	printf("ROW = %ld\n", (*map).row);
	printf("COL = %ld\n", (*map).col);
	printf("COLS = %ld\n", (*map).cols);
	printf("SINGLE BLOCKS = %ld\n", (*map).single_blocks);
	printf("LSEEK = %ld\n", (*map).lseek);
	printf("SIZE = %ld\n", (*map).size);
	printf("WIDTH = %ld\n", (*map).width);
	printf("FD = %d\n", (*map).fd);
	printf("DATA = %p\n", (*map).data);
	printf("\n\n");
}