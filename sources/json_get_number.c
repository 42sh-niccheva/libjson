/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:33:37 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 13:37:45 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"

double		json_get_number(const t_json_entity *entity)
{
	if (entity && entity->type == e_json_type_number)
	{
		return (entity->value.number);
	}
	return (0.0);
}
