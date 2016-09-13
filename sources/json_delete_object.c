/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_object.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:36:47 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:44:20 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_object(t_json_object *object)
{
	if (object)
	{
		if (object->list.next != &(object->list))
		{
			json_delete_object(LIST_FIRST_ENTRY(&(object->list), t_json_object, list));
		}
		if (object->member)
		{
			json_delete_entity(object->member);
		}
		free(object);
	}
}
