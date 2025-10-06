/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:31:04 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 14:27:05 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = malloc(sizeof(t_btree));
	if (!node)
		return (0);
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}

//int	main(void)
//{
//#include <stdio.h>
//	t_btree	*node;
//
//	node = btree_create_node("joel");
//	printf("Current: %p\n", node);
//	printf("Item: %s\n", (char *)node->item);
//	printf("Left: %p\n", node->left);
//	printf("Right: %p\n", node->right);
//	return (0);
//}
