/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:15:06 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:54:52 by joesanto         ###   ########.fr       */
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
//	list = ft_create_elem(&data);
//	ft_list_push_front(&list, &new_data);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %d\n", *(int*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//}
