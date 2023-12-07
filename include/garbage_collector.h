/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:58:29 by mben-has          #+#    #+#             */
/*   Updated: 2023/11/18 02:19:51 by mben-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct s_node_pointer
{
    void    *pointer;
    struct s_node_pointer *next;
    struct s_node_pointer *prev;
}t_node_pointer;

typedef struct s_garbage_collector
{
    t_node_pointer *head;
    t_node_pointer *tail;
    size_t size;
}t_garbage_collector;


t_node_pointer *create_node(void *pointer);
void add_pointer_node(t_garbage_collector *garbage_collector, void *pointer);
t_garbage_collector *init_garbage_collector(void);
void free_all(t_garbage_collector *garbage_collector);

#endif