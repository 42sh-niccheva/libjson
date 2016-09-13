/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_object.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 09:21:34 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:34:55 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "list.h"
#include <stdlib.h>

static void			json_init_object(t_json_object *object,
									t_json_entity *member)
{
	if (object)
	{
		object->member = member;
		init_list(&(object->list));
	}
}

t_json_object		*json_create_object(t_json_entity *member)
{
	t_json_object	*object;

	object = NULL;
	if (member)
	{
		if (member->type == e_json_type_string)
		{
			object = (t_json_object *)malloc(sizeof(*object));
			json_init_object(object, member);
		}
	}
	else
	{
		object = (t_json_object *)malloc(sizeof(*object));
		json_init_object(object, member);
	}
	return (object);
}
