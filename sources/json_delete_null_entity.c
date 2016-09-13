/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_null_entity.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:21:16 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:42:28 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_null_entity(t_json_entity *entity)
{
	if (entity)
	{
		free(entity);
	}
}
