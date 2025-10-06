/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:15:30 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:58:46 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

//#include<stdio.h>
//t_list	*ft_create_elem(void *data);
//void	ft_list_push_front(t_list **begin, void *data);
//int	main(void)
//{
//	t_list	*list;
//	int		data;
//	int		new_data;
//
//	data = 42;
//	new_data = data * 2;
//	list = ft_create_elem(&data);
//	ft_list_push_front(&list, &new_data);
//	printf("%d\n", ft_list_size(list));
//	return (0);
//}
