# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-meka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 18:52:03 by mel-meka          #+#    #+#              #
#    Updated: 2023/10/04 17:28:09 by mel-meka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar rc
RM = rm -f

INCLUDES = .

MY_SOURCES = ft_strlen.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(AR) $(NAME) $(MY_OBJECTS)

.c.o:
	$(CC) $(FLAGS) $< -c -o $@ -I $(INCLUDES)

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
