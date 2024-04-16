#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node left
 * @parent: Pointer to the node to insert
 * @value: value to store in the new node
 * Return: Pointer to created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return(NULL);
    }
    
    binary_tree_t *new_left_node = malloc(sizeof(binary_tree_t));
    if (new_left_node == NULL)
    {
        return (NULL);
    }

    new_left_node->n = value;
    new_left_node->left = parent->left;
    new_left_node->right = NULL;
    return (new_left_node);

    if (parent->left != NULL)
    {
        new_left_node->left = parent->left;
        parent->left = new_left_node;
    }
    else
    {
        parent->left = new_left_node;
    }

    return (new_left_node);
    
}