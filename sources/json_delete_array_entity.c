/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_array_entity.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:33:49 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:44:36 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_array_entity(t_json_entity *entity)
{
	if (entity)
	{
		if (entity->value.array)
		{
			json_delete_array(entity->value.array);
		}
		free(entity);
	}
}
