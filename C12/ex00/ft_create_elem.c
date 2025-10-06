/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:14:31 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:50:46 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->data = data;
	return (node);
}
//int	main(void)
//{
//#include <stdio.h>
//	t_list	*node;
//	int		test;
//
//	test = 42;
//	node = ft_create_elem(&test);
//	printf("data: %d\nnext: %p\n", *(int*)node->data, node->next);
//}
