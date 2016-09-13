/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_null_entity.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:07:16 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:14:01 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "private_json.h"
#include <stdlib.h>

t_json_entity		*json_create_null_entity(void)
{
	t_json_entity	*entity;

	entity = (t_json_entity *)malloc(sizeof(*entity));
	if (entity)
	{
		json_init_entity(&(entity->value));
		entity->type = e_json_type_null;
	}
	return (entity);
}
