#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/09 13:23:47 by niccheva          #+#    #+#              #
#    Updated: 2016/09/13 13:57:42 by niccheva         ###   ########.fr        #
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

SOURCES		=	json_create_member.c
SOURCES		+=	json_create_object.c
SOURCES		+=	json_create_array.c

SOURCES		+=	json_init_entity.c

SOURCES		+=	json_create_null_entity.c
SOURCES		+=	json_create_bool_entity.c
SOURCES		+=	json_create_number_entity.c
SOURCES		+=	json_create_string_entity.c
SOURCES		+=	json_create_member_entity.c
SOURCES		+=	json_create_object_entity.c
SOURCES		+=	json_create_array_entity.c

SOURCES		+=	json_delete_entity.c
SOURCES		+=	json_delete_null_entity.c
SOURCES		+=	json_delete_bool_entity.c
SOURCES		+=	json_delete_number_entity.c
SOURCES		+=	json_delete_string_entity.c
SOURCES		+=	json_delete_member_entity.c
SOURCES		+=	json_delete_object_entity.c
SOURCES		+=	json_delete_entity.c

SOURCES		+=	json_delete_member.c
SOURCES		+=	json_delete_object.c
SOURCES		+=	json_delete_array.c

SOURCES		+=	json_add_array.c
SOURCES		+=	json_add_array.c

SOURCES		+=	json_is_null.c
SOURCES		+=	json_get_bool.c
SOURCES		+=	json_get_number.c
SOURCES		+=	json_get_string.c
SOURCES		+=	json_get_member.c
SOURCES		+=	json_get_object.c
SOURCES		+=	json_get_array.c

SOURCES		+=	json_entity_size.c

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
	@rm -Rf $(BUILD)

re: fclean all

.PHONY: all clean fclean re
