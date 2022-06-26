/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:33:39 by mocharfa          #+#    #+#             */
/*   Updated: 2022/06/26 03:23:06 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->data = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_addfront(t_list	**stuck, t_list *new)
{
	new->next = *stuck;
	*stuck = new;
}

int	countlist(t_list *head)
{
	t_list	*tmp;
	int		count;

	tmp = head;
	count = 0;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

t_list	*ft_addlast(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_addback(t_list **stack, t_list *new)
{
	t_list	*last;

	if (*stack)
	{
		last = ft_addlast(*stack);
		last->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}
