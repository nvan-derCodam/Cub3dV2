# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nvan-der <nvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 14:42:36 by nvan-der      #+#    #+#                  #
#    Updated: 2021/04/12 16:37:50 by nvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER_FILES = libft.h
SRCS_FILES = ft_strlen.c ft_atoi.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_strncmp.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_abs.c \
	ft_strnstr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putnbr_fd.c ft_putendl_fd.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	ft_strjoin.c ft_substr.c ft_split.c ft_lstnew.c ft_lstsize.c \
	ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	ft_lstiter.c ft_lstmap.c ft_lstclear.c ft_swap.c ft_contains.c \
	ft_str_contains_any.c ft_convert_to_hex.c ft_intlen.c ft_isnumeric.c \
	ft_strchr_i.c ft_strcmp.c ft_strcpy.c
SRCS = $(addprefix srcs/, $(SRCS_FILES))
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -O2

PRINT = \e[1;34mBuilding $<\e[0m


all: $(NAME)

$(NAME): $(OBJS)
	@ $(AR) rcs $@ $^
	@echo "\nDone making $(NAME)\n"

%.o: %.c $(HEADER_FILES)
	@ $(CC) -c $(CFLAGS) -o $@ $<

clean:
	@ rm -f $(OBJS)
	@echo "\nDeleted LIBFT objects\n"

fclean: clean
	@ rm -f $(NAME)
	@echo "\nDeleted $(NAME)\n"
re: 
	@echo Remaking$(LIBFT)
	@ $(MAKE) fclean
	@ $(MAKE) all

.PHONY: all clean fclean re
