# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estina <estina@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 13:13:02 by estina            #+#    #+#              #
#    Updated: 2019/11/04 11:29:57 by estina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
RM		=	rm -rf
FLAGS	=	-Wall -Werror -Wextra

${NAME}:
	gcc ${FLAGS} -o ${NAME}

all:
	${NAME}

clean:
	${RM} ${NAME}

fclean:
	clean

re:
	fclean all