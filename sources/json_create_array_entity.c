/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_array_entity.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:37:51 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:38:25 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "private_json.h"
#include <stdlib.h>

t_json_entity		*json_create_array_entity(t_json_array *array)
{
	t_json_entity	*entity;

	entity = (t_json_entity *)malloc(sizeof(*entity));
	if (entity)
	{
		json_init_entity(&(entity->value));
		entity->value.array = array;
		entity->type = e_json_type_array;
	}
	return (entity);
}
