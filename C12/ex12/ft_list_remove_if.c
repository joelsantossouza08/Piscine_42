/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:19:53 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:23:34 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*next;

	if (!begin_list || !cmp)
		return ;
	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) != 0)
			begin_list = &(*begin_list)->next;
		else
		{
			next = (*begin_list)->next;
			if (free_fct)
				free_fct((*begin_list)->data);
			free(*begin_list);
			*begin_list = next;
		}
	}
}

//#include<stdio.h>
//#include <string.h>
//#include <unistd.h>
//t_list	*ft_list_push_strs(int size, char **argv);
//void	ft_putstr(char *str)
//{
//	if (!str)
//		return ;
//	while (*str)
//		write(1, str++, 1);
//}
//int	main(int argc, char **argv)
//{
//	t_list	*list;
//	t_list	*ptr;
//
//	list = ft_list_push_strs(argc, argv);
//	ptr = list;
//	while (ptr)
//	{
//		printf("%s\n", (char*)ptr->data);
//		ptr = ptr->next;
//	}
//	ft_list_remove_if(&list, "hello", (int(*)(char*,char*))strcmp, 0);
//	printf("\n---- remove ---\n");
//	ptr = list;
//	while (ptr)
//	{
//		printf("%s\n", (char*)ptr->data);
//		ptr = ptr->next;
//	}
//	return (0);
//}
