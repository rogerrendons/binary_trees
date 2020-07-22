#include "binary_trees.h"

/**
 * binary_tree_height - find height of tree
 * @tree: tree for height
 * Return: height tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t branch1, branch2, total;

	total = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		total++;

	branch1 = binary_tree_height(tree->left);
	branch2 = binary_tree_height(tree->right);

	if (branch1 > branch2)
		total = total + branch1;
	else
		total = total + branch2;

	return (total);
}
