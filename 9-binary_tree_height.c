#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height if a binary tree
 * @tree: Pointer to the root node
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		height_l = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		height_r = 1 + binary_tree_height(tree->right);
	}

	if (height_l > height_r)
	{
		return (height_l);
	}
	else
	{
		return (height_r);
	}	
}
