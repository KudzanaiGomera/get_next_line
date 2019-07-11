# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgomera <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 13:50:37 by kgomera           #+#    #+#              #
#    Updated: 2019/07/11 10:21:23 by kgomera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= gcc

FLAGS = -Wall -Wextra -Werror

SRC= ft_memalloc.c ft_putnbr.c ft_strdup.c ft_strnequ.c ft_memccpy.c ft_putnbr_fd.c	ft_strequ.c	ft_strnew.c ft_memchr.c	ft_putstr.c	ft_striter.c ft_strnstr.c ft_atoi.c ft_memcmp.c	ft_putstr_fd.c ft_striteri.c ft_strrchr.c ft_bzero.c ft_memcpy.c	ft_size.c ft_strjoin.c ft_strsplit.c ft_count.c ft_memdel.c	ft_split.c ft_strlcat.c ft_strstr.c ft_isalnum.c ft_memmove.c ft_strcat.c	ft_strlen.c	ft_strsub.c ft_isalpha.c ft_memset.c	ft_strchr.c	ft_strmap.c	ft_strtrim.c ft_isascii.c ft_putchar.c ft_strclr.c	ft_strmapi.c ft_tolower.c ft_isdigit.c ft_putchar_fd.c	ft_strcmp.c	ft_strncat.c ft_toupper.c ft_isprint.c ft_putendl.c ft_strcpy.c	ft_strncmp.c ft_itoa.c ft_putendl_fd.c	ft_strdel.c	ft_strncpy.c strjoin.c ft_red.c

OBJ= ft_putnbr.o ft_strncpy.o ft_memccpy.o ft_strdup.o ft_putnbr_fd.o ft_strnequ.o ft_memchr.o ft_strequ.o ft_atoi.o ft_putstr.o ft_strnew.o ft_memcmp.o ft_striter.o ft_bzero.o ft_putstr_fd.o ft_strnstr.o ft_memcpy.o ft_striteri.o ft_count.o ft_size.o ft_strrchr.o ft_memdel.o ft_strjoin.o ft_isalnum.o ft_split.o ft_strsplit.o ft_memmove.o ft_strlcat.o ft_isalpha.o ft_strcat.o ft_strstr.o ft_memset.o ft_strlen.o ft_isascii.o ft_strchr.o ft_strsub.o ft_putchar.o ft_strmap.o ft_isdigit.o ft_strclr.o ft_strtrim.o ft_putchar_fd.o ft_strmapi.o ft_isprint.o ft_strcmp.o ft_tolower.o ft_putendl.o ft_strncat.o ft_itoa.o ft_strcpy.o ft_toupper.o ft_putendl_fd.o ft_strncmp.o ft_memalloc.o ft_strdel.o strjoin.o ft_red.o

all: $(NAME)
	
$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all				
