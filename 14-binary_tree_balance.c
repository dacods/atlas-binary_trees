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

	if (tree == NULL)
	{
		return (0);
	}

	while (current)
	{
		height_l++;
		current = current->left;
	}

	current = tree->right;
	while (current)
	{
		height_r++;
		current = current->right;
	}

	return (height_l - height_r);
}
