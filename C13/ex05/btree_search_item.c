/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:57:50 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/17 08:49:47 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	t_btree	*found;

	if (!root)
		return (0);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	found = btree_search_item(root->left, data_ref, cmpf);
	if (found)
		return (found);
	return (btree_search_item(root->right, data_ref, cmpf));
}

//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
//t_btree	*btree_create_node(void *item);
//void    btree_apply_infix(t_btree *root)
//{
//	if (!root)
//		return ;
//	btree_apply_infix(root->left);
//	printf("Addr:\t%p\t\tValue:\t%s\n", root, (char*)root->item);
//	btree_apply_infix(root->right);
//}
//int   main(int argc, char **argv)
//{
//      t_btree	*tree;
//	  t_btree	*found;
//
//      tree = btree_create_node("4");
//      tree->left = btree_create_node("2");
//      tree->right = btree_create_node("5");
//      tree->left->left = btree_create_node("1");
//      tree->left->right = btree_create_node("3");
//      tree->right->right = btree_create_node("6");
//      btree_apply_infix(tree);
//        if (argc <= 1)
//                return (1);
//        while (*++argv)
//        {
//                printf("\n\n-- FINDING \"%s\"... --\n", *argv);
//				found = btree_search_item(tree, *argv,
//					(int(*)(void*, void*))strcmp);
//				printf("Addr:\t%p\t\t", found);
//				printf("Item:\t%s\n", found ? (char*)found->item : "(nil)");
//        }
//      return (0);
//}
