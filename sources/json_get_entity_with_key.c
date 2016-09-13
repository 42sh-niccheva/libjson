/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_entity_with_key.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 14:18:29 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 14:28:41 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "libft.h"
#include <stdlib.h>

t_json_entity		*json_get_entity_with_key(const t_json_entity *object,
											const char *key)
{
	t_list			*pos;
	t_json_entity	*entry;
	t_json_member	*member;

	entry = NULL;
	if (object && object->type == e_json_type_object)
	{
		pos = object->value.object->list.next;
		while (pos != &(object->value.object->list))
		{
			member = LIST_ENTRY(pos, t_json_object, list)->member->value.member;
			entry = member->value;
			if (entry && ft_strequ(key, member->key->value.string))
			{
				break ;
			}
			pos = pos->next;
		}
	}
	return (entry);
}
