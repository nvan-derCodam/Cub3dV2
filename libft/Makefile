# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 14:42:36 by nvan-der      #+#    #+#                  #
#    Updated: 2021/04/26 08:41:12 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCSDIR = srcs/
OBJSDIR = objs/
_OBJS = ft_strlen ft_atoi ft_tolower ft_isalpha ft_isdigit \
	ft_isalnum ft_isascii ft_isprint ft_toupper ft_strncmp \
	ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
	ft_memcmp ft_strchr ft_strlcpy ft_strlcat ft_strrchr ft_abs \
	ft_strnstr ft_calloc ft_strdup ft_putchar_fd ft_putstr_fd \
	ft_putnbr_fd ft_putendl_fd ft_strtrim ft_itoa ft_strmapi \
	ft_strjoin ft_substr ft_split ft_lstnew ft_lstsize \
	ft_lstadd_front ft_lstlast ft_lstadd_back ft_lstdelone\
	ft_lstiter ft_lstmap ft_lstclear ft_swap ft_contains \
	ft_str_contains_any ft_convert_to_hex ft_intlen ft_isnumeric \
	ft_strchr_i ft_strcmp ft_strcpy
OBJS = $(addsuffix .o, $(addprefix $(OBJSDIR),$(_OBJS)))
CFLAGS = -Wall -Wextra -Werror -O2
_INCLUDES = libft
INCLUDES = $(addsuffix .h, $(_INCLUDES))

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) rcs $@ $^
	@echo "\nDone making $(NAME)\n"

$(OBJSDIR)%.o: $(SRCSDIR)%.c $(INCLUDES)
	@mkdir -p $(OBJSDIR)$(dir $*)
	@$(CC) -Imlx -c $(CFLAGS) -o $@ $<

clean:
	@ rm -f $(OBJS)
	@echo "\nDeleted LIBFT objects\n"

fclean: 
	@$(MAKE) clean
	@rm -f $(NAME)
	@echo "\nDeleted $(NAME)\n"
re: 
	@echo Remaking$(LIBFT)
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
