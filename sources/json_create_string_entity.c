/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_string_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:30:16 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:31:49 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "private_json.h"
#include <stdlib.h>

t_json_entity		*json_create_string_entity(char *value)
{
	t_json_entity	*entity;

	entity = (t_json_entity *)malloc(sizeof(*entity));
	if (entity)
	{
		json_init_entity(&(entity->value));
		entity->value.string = value;
		entity->type = e_json_type_string;
	}
	return (entity);
}
