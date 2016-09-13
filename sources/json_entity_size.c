/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_entity_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:52:11 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 13:57:07 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "list.h"
#include "libft.h"

size_t		json_entity_size(const t_json_entity *entity)
{
	if (entity)
	{
		if (entity->type == e_json_type_object)
		{
			return (list_size(&(entity->value.object->list)));
		}
		if (entity->type == e_json_type_array)
		{
			return (list_size(&(entity->value.array->list)));
		}
		if (entity->type == e_json_type_string)
		{
			return (ft_strlen(entity->value.string));
		}
	}
	return (0);
}
