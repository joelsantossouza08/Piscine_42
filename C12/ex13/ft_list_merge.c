/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 04:43:51 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:28:19 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!begin_list1)
		return ;
	while (*begin_list1)
		begin_list1 = &(*begin_list1)->next;
	*begin_list1 = begin_list2;
}

//#include<stdio.h>
//#include <string.h>
//#include <unistd.h>
//t_list	*ft_list_push_strs(int size, char **argv);
//int	main(int argc, char **argv)
//{
//	t_list	*list;
//	t_list	*ptr;
//	char	*strs[] = {"joel", "caralho", "porra", "never"};
//
//	list = ft_list_push_strs(argc, argv);
//	ptr = ft_list_push_strs(sizeof(strs) / sizeof(char*), strs);
//	ft_list_merge(&list, ptr);
//	ptr = list;
//	while (ptr)
//	{
//		printf("%s\n", (char*)ptr->data);
//		ptr = ptr->next;
//	}
//	return (0);
//}
