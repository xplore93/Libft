# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estina <estina@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 13:13:02 by estina            #+#    #+#              #
#    Updated: 2019/11/06 20:28:35 by estina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
ddddddd
SRCS	=	ft_memset.c		ft_toupper.c	ft_strtrim.c	\
			ft_bzero.c		ft_tolower.c	ft_split.c		\
			ft_memcpy.c		ft_strchr.c		ft_itoa.c		\
			ft_memccpy.c	ft_strrchr.c	ft_strmapi.c	\
			ft_memmove.c	ft_strncmp.c	ft_putchar_fd.c	\
			ft_memchr.c		ft_strlcpy.c	ft_putstr_fd.c	\
			ft_memcmp.c		ft_strlcat.c	ft_putendl_fd.c	\
			ft_strlen.c		ft_strnstr.c	ft_putnbr_fd.c	\
			ft_isalpha.c	ft_atoi.c						\
			ft_isdigit.c	ft_calloc.c						\
			ft_isalnum.c	ft_strdup.c						\
			ft_isascii.c	ft_substr.c						\
			ft_isprint.c	ft_strjoin.c					\
			ft_lstnew.c		ft_lstadd.c		ft_lstsize.c	\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
			ft_lstclear.c	ft_lstiter.c	ft_lstmap.c

GCC		=	@gcc -Wall -Wextra -Werror

OBJECTS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS) libft.h
	-$(GCC) -I./ -c $(SRCS)
	-@ar rc $(NAME) $(OBJECTS)
	-@ranlib $(NAME)

clean:
	-@rm -f $(OBJECTS)

fclean: clean
	-@rm -f $(NAME)

re: fclean all
