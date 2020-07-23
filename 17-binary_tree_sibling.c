#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds siblings of a node
 * @node: Pointer to node to find the sibling
 *
 * Return: Sibling of node, otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
