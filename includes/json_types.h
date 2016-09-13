/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_types.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 11:05:22 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/13 10:05:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JSON_TYPES_H
# define JSON_TYPES_H

# include "list.h"
# include <stdbool.h>

typedef struct s_json_member	t_json_member;
typedef struct s_json_object	t_json_object;
typedef struct s_json_array		t_json_array;
typedef struct s_json_entity	t_json_entity;

enum							e_json_type
{
	e_json_type_null,
	e_json_type_bool,
	e_json_type_number,
	e_json_type_string,
	e_json_type_member,
	e_json_type_object,
	e_json_type_array
};

/*
** A JSON member is defined by a key and a value.
** The key is of type t_json_entity but is mandatory
** a JSON string (which is wrap by quotes).
** The value is free to be of any type of t_json_entity.
*/

struct							s_json_member
{
	t_json_entity				*key;
	t_json_entity				*value;
};

/*
** A JSON object is defined by a t_json_member and a t_list.
*/

struct							s_json_object
{
	t_json_entity				*member;
	t_list						list;
};

/*
** A JSON array is defined by a t_json_entity and a t_list.
*/

struct							s_json_array
{
	t_json_entity				*value;
	t_list						list;
};

union							u_json_entity
{
	bool						boolean;
	double						number;
	char						*string;
	t_json_member				*member;
	t_json_array				*array;
	t_json_object				*object;
};

/*
** A JSON entity is defined by an union which stock the real data
** and the type of this data.
*/

struct							s_json_entity
{
	union u_json_entity			value;
	enum e_json_type			type;
};

#endif
