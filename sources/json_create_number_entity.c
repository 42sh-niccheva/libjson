/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_number_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:25:27 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:34:03 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "private_json.h"
#include <stdlib.h>

t_json_entity		*json_create_number_entity(double value)
{
	t_json_entity	*entity;

	entity = (t_json_entity *)malloc(sizeof(*entity));
	if (entity)
	{
		json_init_entity(&(entity->value));
		entity->value.number = value;
		entity->type = e_json_type_number;
	}
	return (entity);
}
