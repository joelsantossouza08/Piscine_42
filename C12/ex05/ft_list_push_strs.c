/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:16:28 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 11:24:53 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (!begin_list)
		return ;
	new = ft_create_elem(data);
	if (!new)
		return ;
	new->next = *begin_list;
	*begin_list = new;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	if (!strs || size <= 0)
		return (0);
	list = 0;
	while (size--)
		ft_list_push_front(&list, *strs++);
	return (list);
}

//#include<stdio.h>
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
//}
