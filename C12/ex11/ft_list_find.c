/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:19:27 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:14:56 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!cmp)
		return (0);
	while (begin_list)
	{
		if (cmp(begin_list->data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (0);
}

//#include<stdio.h>
//#include <string.h>
//#include <unistd.h>
//t_list        *ft_list_push_strs(int size, char **argv);
//int   main(int argc, char **argv)
//{
//      t_list 	*list;
//	  t_list	*found;
//
//      list = ft_list_push_strs(argc - 1, argv + 1);
//      found = ft_list_find(list, "joel", strcmp);
//	  printf("Current: %p\n", found);
//	  printf("Data:    %s\n", found ? (char*)found->data : "(nil)");
//	  printf("Next:    %p\n", found ? found->next : 0);
//	  if (found && found->next)
//	  	printf("data_nx: %s\n", (char*)found->next->data);
//	  else
//	  	printf("data_nx: (nil)\n");
//	  return (0);
//}
