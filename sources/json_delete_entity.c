/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_entity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:39:39 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:42:21 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

typedef void	(*t_json_entity_deleter)(t_json_entity *);

void		json_delete_entity(t_json_entity *entity)
{
	static const t_json_entity_deleter tab[] = {
		json_delete_null_entity,
		json_delete_bool_entity,
		json_delete_number_entity,
		json_delete_string_entity,
		json_delete_member_entity,
		json_delete_object_entity,
		json_delete_array_entity
	};

	if (entity)
	{
		tab[entity->type](entity);
	}
}
