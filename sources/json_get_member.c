/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_member.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:36:46 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 13:39:15 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

t_json_member	*json_get_member(const t_json_entity *entity)
{
	if (entity && entity->type == e_json_type_member)
	{
		return (entity->value.member);
	}
	return (NULL);
}
