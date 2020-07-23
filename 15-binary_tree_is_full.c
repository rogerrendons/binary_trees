#include "binary_trees.h"

/**
 * binary_tree_is_full - probe if tree is full
 * @tree: tree to exam
 * Return: 1 or 0 (Boolean)
 */

/*
* ================================================================
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
