/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_types.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 11:05:22 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/06 09:39:56 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JSON_TYPES_H
# define JSON_TYPES_H

# include "libft.h"
# include "list.h"

typedef struct s_json_array		t_json_array;
typedef struct s_json_object	t_json_object;
typedef struct s_json_error		t_json_error;
typedef struct s_json_entity	t_json_entity;
typedef enum e_json_type		t_json_type;

union							u_json_entity
{
	BOOL						boolean;
	double						number;
	char						*string;
	t_json_array				*array;
	t_json_object				*object;
};

struct							s_json_array
{
	t_json_entity				*value;
	t_list						list;
};

struct							s_json_object
{
	char						*key;
	t_json_entity				*value;
	t_list						list;
};

struct							s_json_entity
{
	t_json_type					type;
	union u_json_entity			entity;
	t_json_entity				*parent;
};

struct							s_json_error
{
	char						*error;
};

enum							e_json_type
{
	e_json_type_null,
	e_json_type_bool,
	e_json_type_number,
	e_json_type_string,
	e_json_type_array,
	e_json_type_object
};

#endif
