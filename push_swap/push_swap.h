/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:55:49 by mocharfa          #+#    #+#             */
/*   Updated: 2022/06/26 04:45:18 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "Libft/libft.h"
    // typedef struct s_tes
    // {
    //     int	min;
	//     int	push;
	//     int	max;
	//     int	med;
	//     int	b;
    // } t_tes;

	typedef struct s_list
	{
		int	data;
		int	index;
		struct s_list	*next;
	}	t_list;

t_list	*ft_lstnew(int value);
void	ft_addfront(t_list **stuck, t_list *new);
void	ft_addback(t_list **stack, t_list *new);
t_list	*ft_addlast(t_list *head);
int	countlist(t_list *head);
 //move
int	swap(t_list **stack);
int	sa(t_list **stack_a);
int	sb(t_list **stack_b);
int	push(t_list **stack_send, t_list **stack_from);
int	pb(t_list **stack_a, t_list **stack_b);
int	pa(t_list **stack_a, t_list **stack_b);
int	glabcha9lab(t_list **stack);
int	ra(t_list **stack_a);
int	rb(t_list **stack_a);
int	revrotate(t_list **stack);
int	rra(t_list **stack_a);
int	rrb(t_list **stack_b);
int	rrr(t_list **stack_a, t_list **stack_b);

//check arg
void ft_checkargs(int argc, char **argv);
int ft_isnum(char *num);
void ft_free(char **str);

// Algorithm utils
void	bigsort(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	index_stack(t_list **stack);
void  sort_5(t_list **stack_a, t_list **stack_b);
// sort
void short_sort(t_list **stack_a, t_list **stack_b);
int is_sorted(t_list **stack);
int get_min(t_list **stack, int data);
int	get_distance(t_list **stack, int index);
void	free_stack(t_list **stack);
#endif