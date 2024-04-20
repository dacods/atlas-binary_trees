#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance of a tree
 * @tree: Pointer to the root node
 * Return: Balance or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;
	const binary_tree_t *current = tree->left;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		height_l = (int)binary_tree_height(tree->left) + 1;
	}

	if (tree->right)
	{
		height_r = (int)binary_tree_height(tree->right) + 1;
	}

	return (height_l - height_r);
}
