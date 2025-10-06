/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:18:02 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 11:44:05 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef struct	s_list
//{
//	struct s_list	*next;
//	void			*data;
//}	t_list;

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	if (!begin_list)
		return ;
	prev = 0;
	curr = *begin_list;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
}

//#include<stdio.h>
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
//	ft_list_reverse(&list);
//	printf("----- REVERSED -----\n\n");
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
