/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:18:27 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 13:00:05 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!f)
		return ;
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

//#include<stdio.h>
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
//	ft_list_foreach(list, (void (*)(void *))ft_putstr);
//}
