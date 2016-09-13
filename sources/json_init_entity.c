/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_entity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:10:17 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:12:31 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private_json.h"
#include "json_types.h"
#include <stdlib.h>

void		init_entity(union u_json_entity *entity)
{
	entity->boolean = false;
	entity->number = 0.0;
	entity->string = NULL;
	entity->member = NULL;
	entity->object = NULL;
	entity->array = NULL;
}
