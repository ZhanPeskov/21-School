#ifndef FT_H
#define FT_H
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <limits.h>

#define TRUE			1
#define FALSE			0
#define NOT(exp)		!(exp)
#define ZERO(exp)		!(exp)
#define BUF_MIN			5
#define BUF_SIZE		8192
#define MSG_MAP_ERROR	"map error\n"
#define C_EMPTY			0
#define C_OBSTACLE		1
#define C_FULL			2
#define CHARS_TOTAL		3
#define MAX_LINES		(long)INT_MAX
#define MAX_COLUMNS		(long)INT_MAX

typedef struct			s_map
{
	long				single_blocks;
	long				rows;
	long				row;
	long				cols;
	long				col;
	long				width;
	long				size;
	long				lseek;
	int					fd;
	int					side;
	int					max_side;
	int					top;
	int					left;
	int					rbytes;
	int					rbyte;
	int					success;
	char				*data;
	char				*data_ptr;
	char				chars[CHARS_TOTAL];
#if BUF_SIZE >= BUF_MIN
	char				buf[BUF_SIZE];
#else
	char				buf[BUF_SIZE - BUF_MIN];
#endif
}						t_map;

void					map_show(t_map *map);
void					map_init(t_map *map);
void					map_get(t_map *map, int rbytes);
void					map_set(t_map *map, int success);
void					map_print(t_map *map);
char					*map_malloc(t_map *map);
char					*ft_stpncpy(char *dst, const char *src, long len);
int						map_find_square(t_map *map);
int						map_check(t_map *map, int fd);
int						map_check_data(t_map *map);
int						map_check_rows(t_map *map);
int						map_control(t_map *map, char c);
int						map_correct(t_map *map, int rbytes);
int						ft_is_digit(char c);
int						ft_is_printable(char c);
#endif