/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:44:45 by mocharfa          #+#    #+#             */
/*   Updated: 2022/06/25 00:33:15 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **stack_send, t_list **stack_from)
{
	t_list	*tmp;
	t_list	*head_send;
	t_list	*head_from;

	if (countlist(*stack_from) == 0)
		return (-1);
	head_send = *stack_send;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from ->next;
	*stack_from = head_from;
	if (!head_send)
	{
		head_send = tmp;
		head_send->next = NULL;
		*stack_send = head_send;
	}
	else
	{
		tmp->next = head_send;
		*stack_send = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_printf("pa\n");
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
	{
		return (-1);
	}
	ft_printf("pb\n");
	return (0);
}
