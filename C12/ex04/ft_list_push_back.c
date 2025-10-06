/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:16:09 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 11:14:13 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!begin_list)
		return ;
	while (*begin_list)
		begin_list = &(*begin_list)->next;
	*begin_list = ft_create_elem(data);
}

//#include<stdio.h>
//int	main(void)
//{
//	t_list	*list;
//	t_list	*ptr;
//	int		data;
//	int		new_data;
//
//	data = 42;
//	new_data = data * 2;
//	list = 0;
//	list = ft_create_elem(&data);
//	ft_list_push_back(&list, &new_data);
//	ft_list_push_back(&list, &new_data);
//	ft_list_push_back(&list, &new_data);
//	ft_list_push_back(&list, &new_data);
//	ft_list_push_back(&list, &new_data);
//	ft_list_push_back(&list, &new_data);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %d\n", *(int*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
