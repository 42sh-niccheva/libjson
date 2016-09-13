/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_bool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:56:03 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:57:31 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"

bool		json_get_bool(const t_json_entity *entity)
{
	return (entity && entity->value.boolean);
}
