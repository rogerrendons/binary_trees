#include "binary_trees.h"

/**
 * binary_tree_node - make binary tree node
 * @parent: initial node
 * @value: value node
 *
 * Return: node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodebt = malloc(sizeof(binary_tree_t));

	if (!nodebt)
		return (NULL);

	nodebt->n = value;
	nodebt->parent = parent;
	nodebt->left = NULL;
	nodebt->right = NULL;

	return (nodebt);
}
