#include "binary_trees.h"

/**
 * binary_tree_depth - depth a node in a tree
 * @tree: node
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !(tree->parent))
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
