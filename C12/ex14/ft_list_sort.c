/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:49:00 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:31:55 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_nodes(t_list **head, t_node x, t_node y)
{
	t_list	*tmp;

	if (!head)
		return ;
	if (x.prev)
		x.prev->next = y.curr;
	else
		*head = y.curr;
	if (y.prev)
		y.prev->next = x.curr;
	else
		*head = x.curr;
	tmp = y.curr->next;
	y.curr->next = x.curr->next;
	x.curr->next = tmp;
}

void	ft_swap(void **ele1, void **ele2)
{
	void	*tmp;

	tmp = *ele1;
	*ele1 = *ele2;
	*ele2 = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_node	x;
	t_node	y;

	if (!begin_list || !cmp)
		return ;
	x.prev = 0;
	x.curr = *begin_list;
	while (x.curr)
	{
		y.prev = x.curr;
		y.curr = x.curr->next;
		while (y.curr)
		{
			if (cmp(x.curr->data, y.curr->data) > 0)
			{
				ft_swap_nodes(begin_list, x, y);
				ft_swap((void **)&x.curr, (void **)&y.curr);
			}
			y.prev = y.curr;
			y.curr = y.curr->next;
		}
		x.prev = x.curr;
		x.curr = x.curr->next;
	}
}

//#include<stdio.h>
//int	ft_strcmp(char *s1, char *s2)
//{
//	if (!s1 || !s2)
//		return (0);
//	while (*s1 == *s2)
//	{
//		if (!*s1)
//			return (0);
//		s1++;
//		s2++;
//	}
//	return (*s1 - *s2);
//}
//t_list	*ft_list_push_strs(int size, char **argv);
//int	main(int argc, char **argv)
//{
//	t_list	*list;
//	t_list	*ptr;
//
//	list = ft_list_push_strs(argc - 1, argv + 1);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//	ft_list_sort(&list, ft_strcmp);
//	printf("\n\n----- SORTED -----\n\n");
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
