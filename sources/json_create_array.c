/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 09:29:36 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:35:13 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "list.h"
#include <stdlib.h>

static void			json_init_array(t_json_array *array,
									t_json_entity *value)
{
	if (array)
	{
		array->value = value;
		init_list(&(array->list));
	}
}

t_json_array		*json_create_array(t_json_entity *value)
{
	t_json_array	*array;

	array = NULL;
	if (value)
	{
		if (value->type != e_json_type_member)
		{
			array = (t_json_array *)malloc(sizeof(*array));
			json_init_array(array, value);
		}
	}
	else
	{
		array = (t_json_array *)malloc(sizeof(*array));
		json_init_array(array, value);
	}
	return (array);
}
