/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:54:00 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/13 18:23:31 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}

//#include <stdio.h>
//#include <unistd.h>
//t_btree       *btree_create_node(void *item);
//void  ft_putstr(char *str)
//{
//      while (*str)
//              write(1, str++, 1);
//}
//int   main(void)
//{
//      t_btree *tree;
//
//      tree = btree_create_node("1\n");
//      tree->left = btree_create_node("2\n");
//      tree->right = btree_create_node("3\n");
//      tree->left->left = btree_create_node("4\n");
//      tree->left->right = btree_create_node("5\n");
//      tree->right->right = btree_create_node("6\n");
//      btree_apply_suffix(tree, (void (*)(void *))ft_putstr);
//      return (0);
//}
