# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelarbr <edelarbr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:51:18 by edelarbr          #+#    #+#              #
#    Updated: 2022/11/28 21:04:25 by edelarbr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+= ft_printf.c
SRCS		+= ft_putchar_pf.c
SRCS		+= ft_putstr_pf.c
SRCS		+= ft_putnbr_pf.c
SRCS		+= ft_putadress_pf.c
SRCS		+= ft_putnbr_hex_min_pf.c
SRCS		+= ft_putnbr_hex_maj_pf.c


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