/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/03 15:46:59 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/06 09:42:47 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JSON_H
# define JSON_H

# include "libft.h"
# include "list.h"
# include "json_types.h"

/*
** This file provides some functions to manage JSON entities.
** - json_get_boolean() allow to get the boolean which stocked in entity.
** - json_get_number() allow to get the number which stocked in entity.
** - json_get_string() allow to get the string which stocked in entity.
** - json_get_array() allow to get the JSON object which stocked in entity.
** - json_get_object() allow to get the JSON array which stocked in entity.
** - json_get_entity_with_key() allow to get the JSON entity
**   which stocked in the object with the key.
** - json_get_entity_at() allow to get the JSON entity
**   which stocked in the array at index.
*/

/*
** json_get_boolean return the boolean which is stocked in the entity.
** If entity haven't boolean, error is set.
** Please use the json_free_error() function to free error.
*/
BOOL							json_get_boolean(t_json_entity *entity,
												t_json_error *error);
/*
** json_get_number return the number which is stocked in the entity.
** If entity haven't number, error is set.
** Please use the json_free_error() function to free error.
*/
double							json_get_number(t_json_entity *entity,
												t_json_error *error);
/*
** json_get_string return the string which is stocked in the entity.
** If entity haven't string, error is set.
** Please use the json_free_error() function to free error.
*/
char							*json_get_string(t_json_entity *entity,
												t_json_error *error);
/*
** json_get_array return the array which is stocked in the entity.
** If entity haven't array, error is set.
** Please use the json_free_error() function to free error.
*/
t_json_array					*json_get_array(t_json_entity *entity,
											t_json_error *error);
/*
** json_get_object return the object which is stocked in the entity.
** If entity haven't object, error is set.
** Please use the json_free_error() function to free error.
*/
t_json_object					*json_get_object(t_json_entity *entity,
												t_json_error *error);
/*
** json_get_entity_with_key return the entity which is stocked with key
** in the object.
** If object haven't entity named key, error is set.
** Please use the json_free_error() function to free error.
*/
t_json_entity					*json_get_entity_with_key(t_json_object *object,
														const char *key,
														t_json_error *error);
/*
** json_get_entity_at return the entity which is stocked in the array at index.
** If array haven't entity at index, error is set.
** Please use the json_free_error() function to free error.
*/
t_json_entity					*json_get_entity_at(t_json_array *array,
												const uint64_t *key,
												t_json_error *error);

/*
** json_parse_string take a string parameter and return a JSON entity.
** If an error occured, the error parameter is filled and the function return NULL.
*/
t_json_entity					*json_parse_string(const char *json, t_json_error *error);

BOOL							json_entity_is_null(const t_json_entity *entity);

#endif
