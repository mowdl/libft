# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-meka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 18:52:03 by mel-meka          #+#    #+#              #
#    Updated: 2023/11/06 14:22:56 by mel-meka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar rc
RM = rm -f

INCLUDES = .

MY_SOURCES = ft_isalpha.c		ft_toupper.c	\
			 ft_isdigit.c		ft_tolower.c	\
			 ft_isalnum.c		ft_strchr.c		\
			 ft_isascii.c		ft_strrchr.c	\
			 ft_isprint.c		ft_strncmp.c	\
			 ft_strlen.c		ft_memchr.c		\
			 ft_memset.c		ft_memcmp.c		\
			 ft_bzero.c			ft_strnstr.c	\
			 ft_memcpy.c		ft_atoi.c		\
			 ft_memmove.c						\
			 ft_strlcpy.c		ft_calloc.c		\
			 ft_strlcat.c		ft_strdup.c		\
			 \
			 ft_substr.c		\
			 ft_strjoin.c		\
			 ft_strtrim.c		\
			 ft_split.c			\
			 ft_itoa.c			\
			 ft_strmapi.c		\
			 ft_striteri.c		\
			 ft_putchar_fd.c	\
			 ft_putstr_fd.c		\
			 ft_putendl_fd.c	\
			 ft_putnbr_fd.c

MY_BONUS_SRC = ft_lstnew.c			\
			   ft_lstadd_front.c	\
			   ft_lstsize.c			\
			   ft_lstlast.c			\
			   ft_lstadd_back.c		\
			   ft_lstdelone.c		\
			   ft_lstclear.c		\
			   ft_lstiter.c			\
			   ft_lstmap.c			\


MY_BONUS_OBJ = $(MY_BONUS_SRC:.c=.o)

MY_OBJECTS = $(MY_SOURCES:.c=.o)

NAME = libft.a

BONUS = bonus

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(AR) $(NAME) $(MY_OBJECTS)

$(BONUS): $(NAME) $(MY_BONUS_OBJ)
	$(AR) $(NAME) $(MY_BONUS_OBJ)

.c.o:
	$(CC) $(FLAGS) $< -c -o $@ -I $(INCLUDES)

clean:
	$(RM) $(MY_OBJECTS) $(MY_BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
