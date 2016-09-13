/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_object.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:39:24 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 13:40:47 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

t_json_object	*json_get_object(const t_json_entity *entity)
{
	if (entity && entity->type == e_json_type_object)
	{
		return (entity->value.object);
	}
	return (NULL);
}
