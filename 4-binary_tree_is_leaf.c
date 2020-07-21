#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check node leaf
 * @node: node check
 * Return: 1 node leaf, 0 node no leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
