# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 13:03:28 by aaizenbe          #+#    #+#              #
#    Updated: 2023/12/24 13:03:28 by aaizenbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

FILES = ft_hexadecimal.c ft_pinter.c ft_printf.c ft_putchar.c \
		ft_putnbr.c ft_string.c ft_unsigned_int.c \

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -r $(NAME) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
