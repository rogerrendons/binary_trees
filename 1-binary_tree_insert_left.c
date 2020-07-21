#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node left parent side
 * @parent: initial node
 * @value: value node
 *
 * Return: node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodebt;

	if (!parent)
		return (NULL);

	nodebt = malloc(sizeof(binary_tree_t));
	if (!nodebt)
		return (NULL);

	nodebt->n = value;
	nodebt->parent = parent;
	nodebt->left = parent->left ? parent->left : NULL;
	nodebt->right = NULL;
	parent->left = nodebt;
	if (nodebt->left)
		nodebt->left->parent = nodebt;
	return (nodebt);
}
