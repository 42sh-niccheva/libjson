/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_for_each.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 09:22:04 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/14 09:40:14 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "list.h"

static void			json_for_each_array(const t_json_array *array,
										t_json_for_each_function func)
{
	t_list			*pos;
	t_json_array	*entry;

	if (array)
	{
		pos = array->list.next;
		while (pos != &(array->list))
		{
			entry = LIST_ENTRY(pos, t_json_array, list);
			if (entry)
			{
				func(entry->value);
			}
		}
	}
}

static void			json_for_each_object(const t_json_object *object,
										t_json_for_each_function func)
{
	t_list			*pos;
	t_json_object	*entry;

	if (object)
	{
		pos = object->list.next;
		while (pos != &(object->list))
		{
			entry = LIST_ENTRY(pos, t_json_object, list);
			if (entry)
			{
				func(entry->member);
			}
		}
	}
}

void				json_for_each(const t_json_entity *entity,
								t_json_for_each_function func)
{
	if (entity && func)
	{
		if (entity->type == e_json_type_array)
		{
			json_for_each_array(entity->value.array, func);
		}
		if (entity->type == e_json_type_object)
		{
			json_for_each_object(entity->value.object, func);
		}
	}
}
