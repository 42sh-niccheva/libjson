#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/09 13:23:47 by niccheva          #+#    #+#              #
#    Updated: 2016/07/03 15:43:05 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libjson.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

DSOURCES	=	./sources/

DOBJECTS	=	objects/

BUILD		=	./build

INCLUDES	=	-I./includes
INCLUDES	+=	-I../libft/includes
INCLUDES	+=	-I../liblist/includes

SOURCES		=

OBJECTS		=	$(patsubst %.c, $(BUILD)/$(DOBJECTS)%.o, $(SOURCES))

DEPS		=	$(patsubst %.c, $(BUILD)/$(DOBJECTS)%.d, $(SOURCES))

DEPENDS		=	-MT $@ -MD -MP -MF $(subst .o,.d,$@)

all: $(BUILD)/$(NAME)

$(BUILD)/$(NAME): $(OBJECTS)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	ar rcs $(BUILD)/$(NAME) $(OBJECTS)

-include $(OBJECTS:.o=.d)

$(BUILD)/$(DOBJECTS)%.o: $(DSOURCES)%.c
	@mkdir -p $(BUILD)/$(DOBJECTS)
	@echo "\033[0;32m$< compiled:\t\033[0;m\c"
	$(CC) $(CFLAGS) $(DEPENDS) -o $@ -c $< $(INCLUDES)

clean:
	@rm -rf $(BUILD)/$(DOBJECTS)

fclean: clean
	@rm -f $(BUILD)/$(NAME)

re: fclean all

.PHONY: all clean fclean re
