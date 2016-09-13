/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_entity_at.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:59:30 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 14:18:03 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

t_json_entity		*json_get_entity_at(const t_json_entity *array,
										const size_t index)
{
	size_t			i;
	t_list			*pos;
	t_json_entity	*entry;

	entry = NULL;
	if (array && array->type == e_json_type_array
		&& json_entity_size(array) < index)
	{
		i = 0;
		pos = array->value.array->list.next;
		while (pos != &(array->value.array->list))
		{
			if (i == index)
			{
				entry = LIST_ENTRY(pos, t_json_array, list)->value;
				break ;
			}
			++i;
			pos = pos->next;
		}
	}
	return (entry);
}
