# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/01/23 13:50:37 by nvan-der      #+#    #+#                  #
#    Updated: 2021/04/05 11:27:49 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = cub3D
CC = gcc
SRCSDIR = srcs/
OBJSDIR = objs/
_OBJS = main.o render_frame.o hook_functions.o move_player.o free_functions.o \
	   raycasting.o error_functions.o sprite_setup.o draw_functions.o \
	   sprite_raycast.o parse_map1.o parse_map3.o map_validation.o \
	   empty_struct_functions.o bmp.o draw_shades.o texture_functions.o main_2.o
OBJS = $(addprefix $(OBJSDIR),$(_OBJS))
_REG_OBJS = parse_map2.o draw_floors.o
REG_OBJS = $(addprefix $(OBJSDIR),$(_REG_OBJS))
_BONUS_OBJS = parse_map2_bonus.o draw_floors_bonus.o
BONUS_OBJS = $(addprefix $(OBJSDIR),$(_BONUS_OBJS))

MLXDYL = libmlx.dylib
MLXDIR = mlx/
LIBFT = libft.a
LIBFTDIR = libft/
FRAMEWORK = -framework OpenGL -framework AppKit
FLAGS = -Wall -Werror -Wextra
INCLUDES_OTHER = includes/defines.h

ifeq ($(BONUS),1)
	ALL_OBJS = $(OBJS) $(BONUS_OBJS)
	OTHER = $(REG_OBJS)
	INCLUDES = includes/cub3d_bonus.h
else
	ALL_OBJS = $(OBJS) $(REG_OBJS)
	OTHER = $(BONUS_OBJS)
	INCLUDES = includes/cub3d.h
endif

.PHONY: all clean sclean fclean sre re be bonus

all: $(NAME)

$(OBJSDIR)%.o: $(SRCSDIR)%.c $(INCLUDES) $(INCLUDES_OTHER)
		@mkdir -p objs
		@$(CC) $(FLAGS) -I$(INCLUDES) -I$(INCLUDES_OTHER) -Imlx -c $< -o $@

$(MLXDYL):
		cd $(MLXDIR) && make && mv $(MLXDYL) ..

$(LIBFT):
		cd $(LIBFTDIR) && make && mv $(LIBFT) ..

$(NAME): $(MLXDYL) $(LIBFT) $(ALL_OBJS)
		rm -f $(OTHER)
		$(CC) -L. -lmlx -lft $(FRAMEWORK) -o $(NAME) $(ALL_OBJS)

clean:
		rm -f $(OBJS) $(REG_OBJS) $(BONUS_OBJS)
		cd $(LIBFTDIR) && make clean
		cd $(MLXDIR) && make clean

sclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFT)
		rm -f $(MLXDYL)

re: fclean all

sre: sclean all

bre: fclean bonus

bonus:
		@make BONUS=1
