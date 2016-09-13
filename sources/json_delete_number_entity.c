/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_delete_number_entity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:25:56 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:42:43 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include <stdlib.h>

void		json_delete_number_entity(t_json_entity *entity)
{
	if (entity)
	{
		free(entity);
	}
}
