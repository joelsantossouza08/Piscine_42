/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:00:52 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 15:26:13 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert(t_list **prev, void *data)
{
	t_list	*tmp;

	tmp = *prev;
	*prev = ft_create_elem(data);
	if (*prev)
		(*prev)->next = tmp;
	else
		*prev = tmp;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*prev;

	if (!begin_list || !cmp)
		return ;
	prev = 0;
	while (*begin_list && cmp((*begin_list)->data, data) < 0)
	{
		prev = *begin_list;
		begin_list = &(*begin_list)->next;
	}
	if (!prev)
		ft_insert(begin_list, data);
	else
		ft_insert(&prev->next, data);
}

//#include<stdio.h>
//t_list	*ft_list_push_strs(int size, char **argv);
//void	ft_list_sort(t_list **begin_list, int (*cmp)());
//int	ft_strcmp(char *s1, char *s2)
//{
//	while (*s1 == *s2 && *s1)
//	{
//		s1++;
//		s2++;
//	}
//	return (*s1 - *s2);
//}
//int	main(int argc, char **argv)
//{
//	t_list	*list;
//	t_list	*ptr;
//
//	list = ft_list_push_strs(argc - 1, argv + 1);
//	ft_list_sort(&list, ft_strcmp);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//	printf("\n\n----- INSERTED -----\n\n");
//	ft_sorted_list_insert(&list, "anabela", ft_strcmp);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
