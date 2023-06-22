# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:51:38 by dabdygal          #+#    #+#              #
#    Updated: 2023/06/21 12:56:35 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN_NAME	= test

CC			= cc

MAIN_SRC	= test.c

MAIN_FOLDER = .

SRC_FOLDER 	= .

SRC_FILES 	= ft_memset.c \

OBJECTS		= $(SRC_FILES:.c=.o)

INC_FOLDER 	= .

LIB_FOLDER	= .

LIB_NAME	= libft.a

CFLAGS		= -Wall -Wextra -Werror -I $(INC_FOLDER) -fsanitize=address


all: $(BIN_NAME)

$(BIN_NAME): $(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(addprefix $(MAIN_FOLDER)/,$(MAIN_SRC))
	$(CC) $(CFLAGS) $(addprefix $(MAIN_FOLDER)/,$(MAIN_SRC)) -L$(LIB_FOLDER) $(LIB_NAME) -o $@

$(addprefix $(LIB_FOLDER)/,$(LIB_NAME)): $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ar rc $(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ranlib $(addprefix $(LIB_FOLDER)/,$(LIB_NAME))

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	rm -f $(addprefix $(LIB_FOLDER)/,$(LIB_NAME))

fclean: clean
	rm -f $(BIN_NAME)

re: fclean all
