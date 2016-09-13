/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:40:10 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:42:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_array(t_json_array *array)
{
	if (array)
	{
		if (array->list.next != &(array->list))
		{
			json_delete_array(LIST_FIRST_ENTRY(&(array->list), t_json_array, list));
		}
		if (array->value)
		{
			json_delete_entity(array->value);
		}
		free(array);
	}
}
