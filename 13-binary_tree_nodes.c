#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts nodes with at least 1 child
 * @tree: Pointer to the root node
 * Return: Counted nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
