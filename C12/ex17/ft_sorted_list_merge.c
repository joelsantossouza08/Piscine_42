/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:53:02 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 14:05:56 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)())
{
	t_list	*prev;
	t_list	*next;
	t_list	*tmp;

	if (!begin_list1 || !cmp)
		return ;
	prev = 0;
	while (begin_list2)
	{
		while (*begin_list1 && cmp((*begin_list1)->data, begin_list2->data) < 0)
		{
			prev = *begin_list1;
			begin_list1 = &(*begin_list1)->next;
		}
		next = begin_list2;
		begin_list2 = begin_list2->next;
		tmp = *begin_list1;
		if (prev)
			prev->next = next;
		else
			*begin_list1 = next;
		next->next = tmp;
	}
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
//	t_list	*list1;
//	t_list	*list2;
//	t_list	*ptr;
//	int		mid;
//
//	mid = (argc - 1) / 2;
//	list1 = ft_list_push_strs(mid, argv + 1);
//	list2 = ft_list_push_strs((argc - 1) - mid, (argv + 1) + mid);
//	ft_list_sort(&list1, ft_strcmp);
//	ft_list_sort(&list2, ft_strcmp);
//	printf("\n----- LIST1 -----\n");
//	ptr = list1;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//	printf("\n----- LIST2 -----\n");
//	ptr = list2;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//	printf("\n\n----- INSERTED -----\n\n");
//	ft_sorted_list_merge(&list1, list2, ft_strcmp);
//	ptr = list1;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
