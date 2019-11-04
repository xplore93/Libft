# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estina <estina@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 13:13:02 by estina            #+#    #+#              #
#    Updated: 2019/11/04 22:31:54 by estina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_memset.c		ft_toupper.c	\
			ft_bzero.c		ft_tolower.c	\
			ft_memcpy.c		ft_strchr.c		\
			ft_memccpy.c	ft_strrchr.c	\
			ft_memmove.c	ft_strncmp.c	\
			ft_memchr.c		ft_strlcpy.c	\
			ft_memcmp.c		ft_strlcat.c	\
			ft_strlen.c		ft_strnstr.c	\
			ft_isalpha.c	ft_atoi.c		\
			ft_isdigit.c		\
			ft_isalnum.c		\
			ft_isascii.c		\
			ft_isprint.c

OBJECTS	=	$(SRCS:.c=.o)

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
