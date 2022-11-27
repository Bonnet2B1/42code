# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:51:18 by edelarbr          #+#    #+#              #
#    Updated: 2022/11/27 12:52:45 by edelarbr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+= ft_printf.c


#	=== FLAGS ===
CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror
CFLAGS		+= -g
CFLAGS		+= -c

#	=== KEYS WORDS ===
NAME		= libftprintf.a

OBJS		= $(SRCS:.c=.o)

#	=== COMMANDES ===

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $@ $^

clean:
				@rm -f $(OBJS) $(OBJS_BONUS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all