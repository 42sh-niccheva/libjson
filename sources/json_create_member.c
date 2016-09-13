/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_member.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 09:15:21 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:34:30 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

t_json_member		*json_create_member(t_json_entity *key,
										t_json_entity *value)
{
	t_json_member	*member;

	member = NULL;
	if (key && key->type == e_json_type_string && value)
	{
		member = (t_json_member *)malloc(sizeof(*member));
		if (member != NULL)
		{
			member->key = key;
			member->value = value;
		}
	}
	return (member);
}
