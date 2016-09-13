/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_create_member_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:36:52 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:37:26 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "private_json.h"
#include <stdlib.h>

t_json_entity		*json_create_member_entity(t_json_member *member)
{
	t_json_entity	*entity;

	entity = (t_json_entity *)malloc(sizeof(*entity));
	if (entity)
	{
		json_init_entity(&(entity->value));
		entity->value.member = member;
		entity->type = e_json_type_member;
	}
	return (entity);
}
