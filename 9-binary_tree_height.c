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

	height_l = binary_tree_height(tree->left);

	height_r = binary_tree_height(tree->right);

	if (height_l == 0 && height_r == 0)
	{
		return (0);
	}

	return (height_l > height_r ? height_l : height_r) + 1;
}
