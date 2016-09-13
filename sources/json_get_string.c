/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:35:11 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 13:37:59 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

char	*json_get_string(const t_json_entity *entity)
{
	if (entity && entity->type == e_json_type_string)
	{
		return (entity->value.string);
	}
	return (NULL);
}
