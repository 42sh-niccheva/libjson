/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_member.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:35:10 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:43:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_member(t_json_member *member)
{
	if (member)
	{
		if (member->key)
		{
			json_delete_entity(member->key);
		}
		if (member->value)
		{
			json_delete_entity(member->value);
		}
	}
}
