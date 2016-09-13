/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_member_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:28:39 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:43:02 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_member_entity(t_json_entity *entity)
{
	if (entity)
	{
		if (entity->value.member)
		{
			json_delete_member(entity->value.member);
		}
		free(entity);
	}
}
