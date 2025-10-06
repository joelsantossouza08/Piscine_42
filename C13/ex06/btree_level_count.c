/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:41:05 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/14 14:06:42 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

int	btree_level_count(t_btree *root)
{
	if (!root || (!root->left && !root->right))
		return (0);
	return (1 + max(btree_level_count(root->left),
			btree_level_count(root->right)));
}

//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
//t_btree	*btree_create_node(void *item);
//int   main(void)
//{
//      t_btree	*tree;
//
//      tree = btree_create_node("4");
//      tree->left = btree_create_node("2");
//      tree->right = btree_create_node("5");
//      tree->left->left = btree_create_node("1");
//      tree->left->right = btree_create_node("3");
//      tree->left->right->left = btree_create_node("3");
//      tree->left->right->left->left = btree_create_node("3");
//      tree->right->right = btree_create_node("6");
//	  printf("Max-depth: %d\n", btree_level_count(tree));
//      return (0);
//}
