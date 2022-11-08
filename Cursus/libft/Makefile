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
SRC		+= ft_strlen.c
SRC		+= ft_strcat.c
SRC		+= ft_strchr.c
SRC		+= ft_strcmp.c
SRC		+= ft_strncmp.c
SRC		+= ft_strcpy.c
SRC		+= ft_strlcpy.c
SRC		+= ft_strdup.c
SRC		+= ft_strlcat.c
SRC		+= ft_strncat.c
SRC		+= ft_strncpy.c
SRC		+= ft_strnstr.c
SRC		+= ft_strrchr.c
SRC		+= ft_strstr.c
SRC		+= ft_strcapitalize.c
SRC		+= ft_calloc.c
SRC		+= ft_strdel.c
SRC		+= ft_strclr.c
SRC		+= ft_striter.c
SRC		+= ft_striteri.c
SRC		+= ft_strequ.c
SRC		+= ft_strnequ.c
SRC		+= ft_substr.c
SRC		+= ft_strjoin.c
SRC		+= ft_strtrim.c
SRC		+= ft_strmapi.c
SRC		+= ft_split.c

SRC		+= ft_chrcmp.c

SRC		+= ft_putstr.c
SRC		+= ft_putchar.c
SRC		+= ft_putnbr.c
SRC		+= ft_putendl.c
SRC		+= ft_putchar_fd.c
SRC		+= ft_putstr_fd.c
SRC		+= ft_putendl_fd.c
SRC		+= ft_putnbr_fd.c

SRC		+= ft_strisprint.c
SRC		+= ft_strisalnum.c
SRC		+= ft_strisalpha.c
SRC		+= ft_strisascii.c
SRC		+= ft_strisdigit.c
SRC		+= ft_isprint.c
SRC		+= ft_isupper.c
SRC		+= ft_islower.c
SRC		+= ft_isalnum.c
SRC		+= ft_isalpha.c
SRC		+= ft_isascii.c
SRC		+= ft_isdigit.c
SRC		+= ft_isspace.c

SRC		+= ft_memchr.c
SRC		+= ft_memcmp.c
SRC		+= ft_memccpy.c
SRC		+= ft_memcpy.c
SRC		+= ft_memmove.c
SRC		+= ft_memset.c
SRC		+= ft_bzero.c
SRC		+= ft_memalloc.c
SRC		+= ft_memdel.c

SRC		+= ft_atoi.c
SRC		+= ft_tolower.c
SRC		+= ft_toupper.c
SRC		+= ft_itoa.c

SRC		+= ft_factorial.c
SRC		+= ft_power.c
SRC		+= ft_fibonacci.c
SRC		+= ft_sqrt.c
SRC		+= ft_isprime.c
SRC		+= ft_find_next_prime.c

SRC		+= ft_swap.c

#	=== FLAGS ===
CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror
CFLAGS		+= -g
CFLAGS		+= -c

#	=== KEYS WORDS ===
NAME		= libft.a

OBJS		= $(SRC:.c=.o)

#	=== COMMANDES ===

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $@ $^

clean:
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

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