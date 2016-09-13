/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_string_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:27:05 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:45:02 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "libft.h"
#include <stdlib.h>

void		json_delete_string_entity(t_json_entity *entity)
{
	if (entity)
	{
		if (entity->value.string)
		{
			ft_strdel(&(entity->value.string));
		}
		free(entity);
	}
}
