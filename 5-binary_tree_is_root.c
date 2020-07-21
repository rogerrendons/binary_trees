#include "binary_trees.h"
/**
 * binary_tree_is_root - check root node
 * @node: check node
 * Return: is, or not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
