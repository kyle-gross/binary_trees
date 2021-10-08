#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to parent node
 * @value: value to put in new node
 *
 * Return: pointer to new node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node)
    {
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->n = value;
    }
    return (new_node);
}
