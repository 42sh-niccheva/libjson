/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_add_object.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:50:28 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:51:28 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "list.h"

void		json_add_object(t_json_object *head, t_json_object *new)
{
	if (head && new)
	{
		list_add_tail(&(new->list), &(head->list));
	}
}
