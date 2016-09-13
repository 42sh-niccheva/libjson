/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_add_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:51:41 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 11:51:51 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "json.h"
#include "list.h"

void		json_add_array(t_json_array *head, t_json_array *new)
{
	if (head && new)
	{
		list_add_tail(&(new->list), &(head->list));
	}
}
