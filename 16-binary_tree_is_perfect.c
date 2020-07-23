#include "binary_trees.h"

/**
 * binary_tree_height - find height tree
 * @tree: to height
 * Return: height tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t branch1, branch2, total;

	total = 1;

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

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *lval, *rval;

	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		lval = tree->left;
		rval = tree->right;

		if (!lval && !rval)
		{
			return (1);
		}
		return (binary_tree_is_perfect(lval) && binary_tree_is_perfect(rval));
	}
	return (0);
}
