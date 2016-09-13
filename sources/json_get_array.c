/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:41:11 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 13:42:27 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

t_json_array	*json_get_array(const t_json_entity *entity)
{
	if (entity && entity->type == e_json_type_array)
	{
		return (entity->value.array);
	}
	return (NULL);
}
