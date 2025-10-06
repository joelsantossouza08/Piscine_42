/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 08:56:35 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:34:03 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*prev;
	t_list	*next;

	if (!begin_list)
		return ;
	prev = 0;
	while (begin_list)
	{
		next = begin_list->next;
		begin_list->next = prev;
		prev = begin_list;
		begin_list = next;
	}
}

//#include<stdio.h>
//t_list	*ft_list_push_strs(int size, char **argv);
//int	main(int argc, char **argv)
//{
//	t_list	*list;
//	t_list	*ptr;
//	t_list	*new_begin;
//
//	list = ft_list_push_strs(argc, argv);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		new_begin = ptr;
//		ptr = ptr->next;
//	}
//	ft_list_reverse_fun(list);
//	printf("----- REVERSED -----\n\n");
//	ptr = new_begin;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
