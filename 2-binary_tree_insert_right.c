#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right node
 * @parent: initial node
 * @value: value node
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodebt;

	if (!parent)
		return (NULL);

	nodebt = malloc(sizeof(binary_tree_t));

	if (!nodebt)
		return (NULL);

	nodebt->parent = parent;
	nodebt->n = value;
	if (!(parent->right))
		nodebt->right = NULL;
	else
	{
		nodebt->right = parent->right;
		parent->right->parent = nodebt;
	}
	parent->right = nodebt;
	nodebt->left = NULL;
	return (nodebt);
}
