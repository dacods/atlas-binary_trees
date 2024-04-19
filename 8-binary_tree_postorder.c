#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that uses post-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call each node
 * Retrun: 0
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
