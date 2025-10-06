/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:15:48 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 11:03:26 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

//#include<stdio.h>
//t_list	*ft_create_elem(void *data);
//void	ft_list_push_front(t_list **begin, void *data);
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
//	ptr = ft_list_last(list);
//	printf("Current: %p\n", ptr);
//	printf("Data:    %d\n", *(int*)ptr->data);
//	printf("Next:    %p\n", ptr->next);
//	return (0);
//}
