/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:34:07 by mocharfa          #+#    #+#             */
/*   Updated: 2022/06/26 03:34:07 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position(t_list *tmp, int index, int max)
{
	int		i;
	t_list	*stack = tmp;

	i = 0;
	while (stack)
	{
		if (stack->index >= index && stack->index <= max)
			return (i);
		i++;
		stack = stack->next;
	}
	return (0);
}

int	position2(int a, t_list *stack)
{
	t_list	*tmp = stack;
	int		i;

	i = 0;
	while (tmp)
	{
		if (tmp->index == a)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int	b;

	while (countlist(*stack_b) != 0)
	{
		b = position2((*stack_a)->index - 1, *stack_b);
		if (b > countlist(*stack_b) / 2)
		{
			while (b < countlist(*stack_b))
			{
				rrb(stack_b);
				b++;
			}
		}
		else if (b <= countlist(*stack_b) / 2)
		{
			while (b != 0)
			{
				rb(stack_b);
				b--;
			}
		}
		if ((*stack_a)->index -1 == (*stack_b)->index)
			pa(stack_a, stack_b);
	}
}

void	bigsort(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	push;
	int	max;
	int	med;
	int	b;

	min = -1;
	while (countlist(*stack_a) != 5)
	{
		min = get_min(stack_a, min);
		if (countlist(*stack_a) > 100)
			push = (countlist(*stack_a) - 5) / 5;
		else
			push = (countlist(*stack_a) - 5) / 3;
		if (countlist(*stack_a) == 7)
			push = 2;
		if (countlist(*stack_a) == 6)
			push = 1;
		max = (min + push) - 1;
		med = (min + max) / 2;
		while (push != 0)
		{
			b = position(*stack_a, min, max);
			if (b > countlist(*stack_a) / 2)
			{
				while (b < countlist(*stack_a))
				{
					if ((*stack_a)->index >= min && (*stack_a)->index <= max)
					{
						pb(stack_a, stack_b);
						if ((*stack_b)->index < med)
							rb(stack_b);
						push--;
					}
					else
						rra(stack_a);
					b++;
				}
			}
			else if (b <= countlist(*stack_a) / 2)
			{
				while (b >= 0)
				{
					if ((*stack_a)->index >= min && (*stack_a)->index <= max)
					{
						pb(stack_a, stack_b);
						if ((*stack_b)->index < med)
							rb(stack_b);
						push--;
					}
					else
						ra(stack_a);
					b--;
				}
			}
		}
	}
	sort_5(stack_a, stack_b);
	push_to_a(stack_a, stack_b);
}
