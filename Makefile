# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/01/23 13:50:37 by nvan-der      #+#    #+#                  #
#    Updated: 2021/04/19 17:10:19 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = cub3D
SRCSDIR = srcs/
OBJSDIR = objs/
_OBJS = main render_frame hook_functions move_player free_functions raycasting \
		error_functions sprite_setup draw_functions sprite_raycast parse_map1 \
		parse_map3 map_validation empty_struct_functions bmp draw_shades \
		texture_functions main_2
OBJS = $(addsuffix .o, $(addprefix $(OBJSDIR),$(_OBJS)))
_REG_OBJS = parse_map2 draw_floors
REG_OBJS = $(addsuffix .o, $(addprefix $(OBJSDIR),$(_REG_OBJS)))
_BONUS_OBJS = parse_map2_bonus draw_floors_bonus
BONUS_OBJS = $(addsuffix .o, $(addprefix $(OBJSDIR),$(_BONUS_OBJS)))

MLXDYL = libmlx.dylib
MLXDIR = mlx/
LIBFT = libft.a
LIBFTDIR = libft/
FRAMEWORK = -framework OpenGL -framework AppKit
CFLAGS = -Wall -Werror -Wextra
_INCLUDES = defines cub3d
_BONUS_INCLUDES =  defines cub3d_bonus
INCLUDES_DIR = includes/

ifeq ($(BONUS),1)
	ALL_OBJS = $(OBJS) $(BONUS_OBJS)
	OTHER = $(REG_OBJS)
	INCLUDES = $(addsuffix .h,$(addprefix $(INCLUDES_DIR),$(_BONUS_INCLUDES)))
else
	ALL_OBJS = $(OBJS) $(REG_OBJS)
	OTHER = $(BONUS_OBJS)
	INCLUDES = $(addsuffix .h,$(addprefix $(INCLUDES_DIR),$(_INCLUDES)))
endif

all: $(NAME)

$(OBJSDIR)%.o: $(SRCSDIR)%.c $(INCLUDES)
	@mkdir -p $(OBJSDIR)$(dir $*)
	@$(CC) -Imlx -c $(CFLAGS) -o $@ $<

$(MLXDYL):
	@echo "\nMaking $(MLXDYL)\n"
	@cd $(MLXDIR) && make && mv $(MLXDYL) ..

$(LIBFT):
	@echo "\nMaking $(LIBFT)\n"
	@cd $(LIBFTDIR) && make && mv $(LIBFT) ..

$(NAME): $(MLXDYL) $(LIBFT) $(ALL_OBJS)
	@echo "\nMaking Objects\n"
	@echo "\nMaking $(NAME) executable\n"
	@rm -f $(OTHER)
	@$(CC) -L. -lmlx -lft $(FRAMEWORK) -o $(NAME) $(ALL_OBJS)

clean:
	@echo "\nDeleted SOURCE Objects\n"
	@rm -f $(OBJS) $(REG_OBJS) $(BONUS_OBJS)
	@$(MAKE) -C libft/ clean
	@$(MAKE) -C mlx/ clean
		

sclean:
	@echo "\nDeleted $(NAME) and $(LIBFT)\n"
	@rm -f $(NAME)
	@rm -f $(LIBFT)
	@$(MAKE) clean

fclean:
	@echo "\nDeleted $(MLXDYL)\n"
	@rm -f $(MLXDYL)
	@$(MAKE) sclean

re:
	@echo "\nFull remake of: $(NAME)\n"
	@$(MAKE) fclean
	@$(MAKE) all

sre:
	@echo "\Semi remake of: $(NAME) and $(LIBFT)\n"
	@$(MAKE) sclean
	@$(MAKE) all

bre:
	@echo "\nFull remake of: $(NAME) Bonus\n"
	@$(MAKE) fclean
	@$(MAKE) bonus

bonus:
		@echo "\nMaking $(NAME) Bonus\n"
		@$(MAKE) BONUS=1

.PHONY: all clean sclean fclean sre re bre bonus
