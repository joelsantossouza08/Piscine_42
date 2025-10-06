/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:16:40 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 11:31:38 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	if (!begin_list)
		return ;
	ft_list_clear(begin_list->next, free_fct);
	if (free_fct)
		free_fct(begin_list->data);
	free(begin_list);
}

//#include<stdio.h>
//t_list	*ft_list_push_strs(int size, char **strs);
//int	main(int argc, char **argv)
//{
//	t_list	*list;
//	t_list	*ptr;
//
//	list = ft_list_push_strs(argc, argv);
//	ptr = list;
//	while (ptr)
//	{
//		printf("Current: %p\n", ptr);
//		printf("data: %s\n", (char*)ptr->data);
//		printf("next: %p\n\n", ptr->next);
//		ptr = ptr->next;
//	}
//
//	ft_list_clear(list, 0);
//	return (0);
//}
