/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:19:00 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:04:46 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (!f || !cmp)
		return ;
	while (begin_list)
	{
		if (cmp(begin_list->data, data_ref) == 0)
			f(begin_list->data);
		begin_list = begin_list->next;
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
//
//	list = ft_list_push_strs(argc, argv);
//	ft_list_foreach_if(list, (void(*)(void*))ft_putstr, "joel", strcmp);
//}
