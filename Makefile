# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/14 17:00:55 by sbertali          #+#    #+#              #
#    Updated: 2021/03/13 17:21:18 by sbertali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	gcc
CFLAG	=	-Wall -Wextra -Werror
INCLUDE	=	libft.h
LFLAG	=	ar -rcs
INDEX	=	ranlib
RM		=	/bin/rm -f

FUNC	= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c

OBJ		=	$(FUNC:.c=.o)

BONUS_F	=	ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstlast.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_lstsize.c

BONUS_O	=	$(BONUS_F:.c=.o)

EXTRA_F	=	ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_str_is_alpha.c\
			ft_str_is_lowercase.c\
			ft_str_is_numeric.c\
			ft_str_is_printable.c\
			ft_str_is_uppercase.c\
			ft_strcat.c\
			ft_strclen.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strjoin_free.c\
			ft_strncat.c\
			ft_strncpy.c\
			ft_strstr.c

EXTRA_O = $(EXTRA_F:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(INCLUDE)
			$(LFLAG) $(NAME) $(OBJ)
			$(INDEX) $(NAME)

bonus:		$(NAME) $(BONUS_O)
			$(LFLAG) $(NAME) $(BONUS_O)
			$(INDEX) $(NAME)

extra:		$(NAME) $(BONUS_O) $(EXTRA_O)
			$(LFLAG) $(NAME) $(BONUS_O) $(EXTRA_O)
			$(INDEX) $(NAME)

cto:
			$(CC) $(CFLAG) -I $(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJ) $(BONUS_O) $(EXTRA_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus extra

.PHONY:		all clean fclean re bonus extra rebonus
