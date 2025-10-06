/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:10:42 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 15:52:38 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->next = 0;
	node->data = data;
	return (node);
}

void	push(t_list **begin_list, void *data)
{
	if (!begin_list)
		return ;
	while (*begin_list)
		begin_list = &(*begin_list)->next;
	*begin_list = ft_create_elem(data);
}

void	pop(t_list **begin_list, void (*apply_data)(void *))
{
	t_list	*remove;

	if (!begin_list || !*begin_list)
		return ;
	remove = *begin_list;
	*begin_list = (*begin_list)->next;
	if (apply_data)
		apply_data(remove->data);
	free(remove);
}

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list && ++size)
		begin_list = begin_list->next;
	return (size);
}

void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first))
{
	t_list	*lvl;
	int		depth;
	int		size;
	int		i;

	lvl = ft_create_elem(root);
	depth = -1;
	while (lvl && ++depth >= 0)
	{
		size = ft_list_size(lvl);
		i = -1;
		while (++i < size)
		{
			if (lvl->data)
			{
				applyf(((t_btree *)lvl->data)->item, depth, i == 0);
				if (((t_btree *)lvl->data)->left)
					push(&lvl, ((t_btree *)lvl->data)->left);
				if (((t_btree *)lvl->data)->right)
					push(&lvl, ((t_btree *)lvl->data)->right);
			}
			pop(&lvl, 0);
		}
	}
}

//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
//t_btree	*btree_create_node(void *item);
//void	apply_putstr(char *item, int current_level, int is_first)
//{
//	if (is_first)
//		printf("\n");
//	printf("LEVEL:\t%d\t\tITEM:\t%s\n", current_level, item);
//}
//int   main(void)
//{
//	t_btree *tree;
//
//	tree = btree_create_node("1");
//	tree->left = btree_create_node("2");
//	tree->right = btree_create_node("3");
//	tree->left->left = btree_create_node("4");
//	tree->left->right = btree_create_node("5");
//	tree->right->right = btree_create_node("6");
//	tree->right->right->right = btree_create_node("7");
//	tree->right->right->right->left= btree_create_node("8");
//	btree_apply_by_level(tree, (void(*)(void*, int, int))apply_putstr);
//	free(tree->right->right->right->left);
//	free(tree->right->right->right);
//	free(tree->right->right);
//	free(tree->left->right);
//	free(tree->left->left);
//	free(tree->right);
//	free(tree->left);
//	free(tree);
//	btree_apply_by_level(0, (void(*)(void*, int, int))apply_putstr);
//	return (0);
//}
