/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:57:50 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/14 11:52:43 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) > 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
//void	btree_apply_infix(t_btree *root, void (*cmp)(void *));
//void  ft_putstr(char *str)
//{
//      while (*str)
//              write(1, str++, 1);
//}
//int   main(int argc, char **argv)
//{
//      t_btree *tree;
//
//      tree = btree_create_node("4-");
//      tree->left = btree_create_node("2-");
//      tree->right = btree_create_node("5-");
//      tree->left->left = btree_create_node("1-");
//      tree->left->right = btree_create_node("3-");
//      tree->right->right = btree_create_node("6-");
//      btree_apply_infix(tree, (void (*)(void *))ft_putstr);
//	  if (argc <= 1)
//		  return (1);
//	  while (*++argv)
//	  {
//		  printf("\n\n-- INSERT \"%s\" --\n\n", *argv);
//		  btree_insert_data(&tree, *argv, (int(*)(void*, void*))strcmp);
//		  btree_apply_infix(tree, (void(*)(void*))ft_putstr);
//	  }
//      return (0);
//}
