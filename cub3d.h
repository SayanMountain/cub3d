#ifndef CUB_H
#define CUB_H

# include "./libft/libft.h"
# include "./minilibx_opengl/mlx.h"
# include <math.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>
# include "libft/libft.h"

#define screenWidth 640
#define screenHeight 480
#define mapWidth 24
#define mapHeight 24


typedef struct s_data1
{
	char			**map;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
	int				money_count;
	int				exit_count;
	int				play_id;
	int				play_x;
	int				play_y;
	int				scale;
	int				img_height;
	int				img_width;
	int				map_height;
	int				map_width;
	int				back_y;
	int				p_x;
	int				p_y;
	int				step;
	int				back_x;
	void			*mlx;
	void			*wind;
	void			*img;
	void			*play_img;
	void			*play_img_d;
	void			*play_img_s;
	void			*play_img_a;
	void			*play_img_w;
	void			*good_img;
	void			*wall_img;
	void			*exit_img;
	void			*enem_img;
	void			*kirp_img;
	void			*kust_img;
}					t_vars;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_data;