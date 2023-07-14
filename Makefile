# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:51:38 by dabdygal          #+#    #+#              #
#    Updated: 2023/07/12 15:53:29 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME	= libft.a

CC			= cc

SRC_FOLDER 	= .

SRC_FILES 	= ft_memset.c \
			  ft_bzero.c  \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_strlen.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strncmp.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_strnstr.c \
			  ft_atoi.c \
			  ft_calloc.c \
			  ft_strdup.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_split.c \
			  ft_itoa.c \
			  ft_strmapi.c \
			  ft_striteri.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \

OBJECTS		= $(SRC_FILES:.c=.o)

INC_FOLDER 	= .

LIB_FOLDER	= .

CFLAGS		= -Wall -Wextra -Werror


all: $(LIB_NAME)

$(addprefix $(LIB_FOLDER)/,$(LIB_NAME)): $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ar rc $(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ranlib $(addprefix $(LIB_FOLDER)/,$(LIB_NAME))

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(addprefix $(SRC_FOLDER)/,$(OBJECTS))

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
