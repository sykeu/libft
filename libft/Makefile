# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 02:06:19 by hbenzzin          #+#    #+#              #
#    Updated: 2021/12/09 02:08:25 by hbenzzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_split.c ft_strchr.c ft_strdup.c ft_strlen.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	  ft_strlcpy.c ft_substr.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_tolower.c \
	  ft_toupper.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strmapi.c

BSRC = $(SRC) ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
	   ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	ar -rc $(NAME) $(OBJ)

bonus: $(NAME) $(BOBJ)
	ar -rc $(NAME) $(BOBJ)

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME) $(BOBJ)

re: fclean all
