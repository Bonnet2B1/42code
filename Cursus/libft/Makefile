# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 09:22:16 by marvin            #+#    #+#              #
#    Updated: 2022/09/02 09:22:16 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	=== FUNCTIONS ===
SRCS		+= ft_strlen.c
SRCS		+= ft_strcat.c
SRCS		+= ft_strchr.c
SRCS		+= ft_strcmp.c
SRCS		+= ft_strncmp.c
SRCS		+= ft_strcpy.c
SRCS		+= ft_strdup.c
SRCS		+= ft_strlcat.c
SRCS		+= ft_strncat.c
SRCS		+= ft_strncpy.c
SRCS		+= ft_strnstr.c
SRCS		+= ft_strrchr.c
SRCS		+= ft_strstr.c
SRCS		+= ft_strcapitalize.c
SRCS		+= ft_strnew.c
SRCS		+= ft_strdel.c
SRCS		+= ft_strclr.c
SRCS		+= ft_striter.c
SRCS		+= ft_striteri.c
SRCS		+= ft_strequ.c
SRCS		+= ft_strnequ.c
SRCS		+= ft_strsub.c
SRCS		+= ft_strjoin.c
SRCS		+= ft_strtrim.c

SRCS		+= ft_chrcmp.c

SRCS		+= ft_putstr.c
SRCS		+= ft_putchar.c
SRCS		+= ft_putnbr.c
SRCS		+= ft_putendl.c
SRCS		+= ft_putchar_fd.c
SRCS		+= ft_putstr_fd.c
SRCS		+= ft_putendl_fd.c
SRCS		+= ft_putnbr_fd.c

SRCS		+= ft_strisprint.c
SRCS		+= ft_strisalnum.c
SRCS		+= ft_strisalpha.c
SRCS		+= ft_strisascii.c
SRCS		+= ft_strisdigit.c
SRCS		+= ft_isprint.c
SRCS		+= ft_isupper.c
SRCS		+= ft_islower.c
SRCS		+= ft_isalnum.c
SRCS		+= ft_isalpha.c
SRCS		+= ft_isascii.c
SRCS		+= ft_isdigit.c
SRCS		+= ft_isspace.c

SRCS		+= ft_memchr.c
SRCS		+= ft_memcmp.c
SRCS		+= ft_memccpy.c
SRCS		+= ft_memcpy.c
SRCS		+= ft_memmove.c
SRCS		+= ft_memset.c
SRCS		+= ft_bzero.c
SRCS		+= ft_memalloc.c
SRCS		+= ft_memdel.c

SRCS		+= ft_atoi.c
SRCS		+= ft_tolower.c
SRCS		+= ft_toupper.c
SRCS		+= ft_itoa.c

SRCS		+= ft_factorial.c
SRCS		+= ft_power.c
SRCS		+= ft_fibonacci.c
SRCS		+= ft_sqrt.c
SRCS		+= ft_isprime.c
SRCS		+= ft_find_next_prime.c

SRCS		+= ft_swap.c

#	=== KEYS WORDS ===
NAME		= libft.a

CC			= gcc 

OBJS		= $(SRCS:.c=.o)

#	=== FLAGS ===
CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror
CFLAGS		+= -g

#	=== COMMANDES ===
.c.o :
				$(CC) $(CFLAGS) -c $< -o $@ $

all:			$(NAME)

$(NAME):		$(OBJS)
				${CC} -o $@ $^ 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm $(NAME)

re:				fclean all

# $(NAME): 		$(OBJ)
#				ar rc $(NAME) $(OBJ)
#				ranlib $(NAME)

# %.o:			%.c
# 				$(CC) -I. -o $@ -c $? $(CFLAGS)

# all: 			$(NAME)

# clean:
# 				$(RM) $(OBJ)

# fclean:		clean
#				$(RM) $(NAME)


# .PHONY:		clean clean

#$@ --> Le nom de la cible

#$< --> Le nom de la première dépendance

#$^ --> La liste des dépendances

#$? --> La liste des dépendances plus récentes que la cible

#$* --> Le nom du fichier sans suffixe