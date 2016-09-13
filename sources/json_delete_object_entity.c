/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_object_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:31:14 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:44:26 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_object_entity(t_json_entity *entity)
{
	if (entity)
	{
		if (entity->value.object)
		{
			json_delete_object(entity->value.object);
		}
		free(entity);
	}
}
