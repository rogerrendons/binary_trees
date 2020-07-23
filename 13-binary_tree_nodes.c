#include "binary_trees.h"

/**
 * binary_tree_nodes - counter nodes in a binary tree
 * @tree: tree size of
 * Return: nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
