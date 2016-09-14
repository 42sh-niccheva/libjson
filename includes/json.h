/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:24:53 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/14 09:50:39 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JSON_H
# define JSON_H

# include "json_types.h"

typedef void	(*t_json_for_each_function)(const t_json_entity *);
typedef t_json_entity	*(*t_json_collect_function)(const t_json_entity *);

t_json_member	*json_create_member(t_json_entity *key, t_json_entity *value);
t_json_object	*json_create_object(t_json_entity *member);
t_json_array	*json_create_array(t_json_entity *value);

t_json_entity	*json_create_null_entity(void);
t_json_entity	*json_create_bool_entity(bool value);
t_json_entity	*json_create_number_entity(double value);
t_json_entity	*json_create_string_entity(char *value);
t_json_entity	*json_create_member_entity(t_json_member *member);
t_json_entity	*json_create_object_entity(t_json_object *object);
t_json_entity	*json_create_array_entity(t_json_array *array);

void			json_add_object(t_json_object *head, t_json_object *new);
void			json_add_array(t_json_array *head, t_json_array *new);

t_json_entity	*json_parse_null(const char *str);
t_json_entity	*json_parse_bool(const char *str);
t_json_entity	*json_parse_number(const char *str);
t_json_entity	*json_parse_string(const char *str);
t_json_entity	*json_parse_member(const char *str);
t_json_entity	*json_parse_object(const char *str);
t_json_entity	*json_parse_array(const char *str);
t_json_entity	*json_parse_entity(const char *str);

bool			json_is_null(const t_json_entity *entity);
bool			json_get_bool(const t_json_entity *entity);
double			json_get_number(const t_json_entity *entity);
char			*json_get_string(const t_json_entity *entity);
t_json_member	*json_get_member(const t_json_entity *entity);
t_json_object	*json_get_object(const t_json_entity *entity);
t_json_array	*json_get_array(const t_json_entity *entity);

void			json_for_each(const t_json_entity *entity,
							t_json_for_each_function func);
/*
t_json_entity	*json_collect(const t_json_entity *entity,
							t_json_collect_function func);
*/
void			json_put_entity(const t_json_entity *entity);
char			*json_to_string(const t_json_entity *entity);

void			json_delete_member(t_json_member *member);
void			json_delete_object(t_json_object *object);
void			json_delete_array(t_json_array *array);

void			json_delete_null_entity(t_json_entity *entity);
void			json_delete_bool_entity(t_json_entity *entity);
void			json_delete_number_entity(t_json_entity *entity);
void			json_delete_string_entity(t_json_entity *entity);
void			json_delete_member_entity(t_json_entity *entity);
void			json_delete_object_entity(t_json_entity *entity);
void			json_delete_array_entity(t_json_entity *entity);
void			json_delete_entity(t_json_entity *entity);

t_json_entity	*json_get_entity_at(const t_json_entity *array,
									const size_t index);
t_json_entity	*json_get_entity_with_key(const t_json_entity *object,
										const char *key);

size_t			json_entity_size(const t_json_entity *entity);

#endif
